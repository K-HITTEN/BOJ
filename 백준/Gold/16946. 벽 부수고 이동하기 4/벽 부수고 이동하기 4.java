
import java.util.*;
import java.io.*;
import java.util.stream.Stream;

public class Main
{
    static final int MOD = 10;
    static int N, M, num;
    static int[] counts;
    static int[][] map;
    static int[] dr = {0,1,0,-1};
    static int[] dc = {1,0,-1,0};
    static Deque<int[]> queue = new ArrayDeque<>();
    static Set<Integer> set = new HashSet<>();
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        map = new int[N][M]; // 카피 맵 -> 벽을 -1로 두고 0군집에 넘버링(1,2,..)할 예정
        counts = new int[500001]; // 군집 0의 갯수를 저장할 것.
        for(int i=0; i<N; i++){
            int[] tmp = Stream.of(br.readLine().split("")).mapToInt(Integer::parseInt).toArray();
            for(int j=0; j<M; j++){
                int n = tmp[j];
                if(n == 1) {
                    map[i][j] = -1;  // 카피 맵 벽
                }
            }
        }
        num = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(map[i][j] == 0)numbering(i,j);
            }
        }

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(map[i][j] == -1){ // 원본 배열의 값이 1인 경우 이동 가능 수 계산
                    int sum = 1;
                    set.clear();
                    for(int d = 0; d<4; d++){
                        int nr = i + dr[d];
                        int nc = j + dc[d];
                          // 4방향에 대해서 군집 더하기, 같은 군집일 경우 있을 수 있으니 셋으로 관리
                        if(nr < 0 || nr >= N || nc < 0 || nc >= M || map[nr][nc] == -1 || set.contains(map[nr][nc])) continue;
                        set.add(map[nr][nc]);
                        sum += counts[map[nr][nc]];
                    }
                    sb.append(sum%MOD);
                    // origin[i][j] = sum%MOD;
                }
                else sb.append(0);
                // sb.append(origin[i][j]);
            }
            sb.append("\n");
        }
        System.out.println(sb);
        br.close();
    }
  // bfs -> 방문한 0은 set에서 제거
    public static void numbering(int s, int e){
        ++num;
        int cnt = 0;
        queue.add(new int[]{s,e});
        map[s][e] = num;
        while(!queue.isEmpty()){
            int[] cur = queue.poll();
            cnt++;
            for(int d=0; d<4; d++){
                int nr = cur[0] + dr[d];
                int nc = cur[1] + dc[d];
                if(nr < 0 || nr >= N || nc < 0 || nc >= M || map[nr][nc] != 0) continue;
                map[nr][nc] = num;
                queue.add(new int[]{nr,nc});
            }
        }
        counts[num] = cnt;
    }
}
