import java.io.*;
import java.util.*;

class Main{
    static int[][] arr;
    static int[] dy = {-1,1,0,0,-1,-1,1,1}, dx = {0,0,-1,1,-1,1,-1,1};
    static boolean[][] visited;
    static boolean[] check = new boolean[501];
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken()), M = Integer.parseInt(st.nextToken()), ret = 0;
        arr = new int[N][M];
        visited = new boolean[N][M];
        for(int i = 0; i < N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j = 0; j < M; j++){
                arr[i][j] = Integer.parseInt(st.nextToken());
                if(arr[i][j] == 0)visited[i][j] = true;
                if(!check[arr[i][j]])check[arr[i][j]] = true;
            }
        }
        Deque<Info> queue = new ArrayDeque<>();
        for(int h = 500; h > 0; h--){
            if(!check[h])continue;
            for(int i = 0; i < N; i++){
                for(int j = 0; j < M; j++){
                    if(arr[i][j] == h && !visited[i][j]){
                        ret++;
                        visited[i][j] = true;
                        queue.offer(new Info(i,j,h));
                        while(!queue.isEmpty()){
                            Info tmp = queue.poll();
                            for(int d = 0; d < 8; d++){
                                int ny = tmp.y+dy[d], nx = tmp.x+dx[d];
                                if(ny < 0 || nx < 0 || ny >= N || nx >= M || visited[ny][nx] || arr[ny][nx]>tmp.n)continue;
                                visited[ny][nx] = true;
                                queue.offer(new Info(ny,nx,arr[ny][nx]));
                            }
                        }
                    }
                }
            }
        }
        System.out.print(ret);
    }
    
}

class Info{
        int y, x, n;
        Info(int y, int x, int n){
            this.y = y;
            this.x = x;
            this.n = n;
        }
    }