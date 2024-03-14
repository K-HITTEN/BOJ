import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	static boolean key[],visited[][];
	static char map[][];
	static int[] dy = {-1,1,0,0},dx= {0,0,-1,1};
	static int N, M;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int T = Integer.parseInt(st.nextToken());
		String s;
		for(int t = 0; t < T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			M = Integer.parseInt(st.nextToken());
			key = new boolean[26];
			map = new char [N+2][M+2];
			visited = new boolean[N+2][M+2];
			for(int i = 1; i <= N; i++) {
				s = br.readLine();
				for(int j = 1; j <= M; j++) {
					map[i][j] = s.charAt(j-1);
					if(map[i][j] == '*')visited[i][j] = true;
				}
			}
			s = br.readLine();
			if(!s.equals("0")) {
				for(int i = 0; i < s.length(); i++) {
					key[s.charAt(i)-97] = true;
				}
			}
			Deque <int[]> q = new ArrayDeque<>();
			Deque <int[]> door = new ArrayDeque<>();
			q.offer(new int[] {0,0});
			int result = 0;
			while(!q.isEmpty()) {
				int[] tmp = q.poll();
				for(int d = 0; d< 4; d++) {
					int ny = tmp[0]+dy[d], nx = tmp[1]+dx[d];
					if(ny<0||nx<0||ny>N+1||nx>M+1||visited[ny][nx])continue;
					visited[ny][nx] = true;
					if(65<=(int)map[ny][nx] && (int)map[ny][nx]<=90) {
						if(key[(int)map[ny][nx]-65])q.offer(new int[] {ny,nx});
						else door.offer(new int[] {(int)map[ny][nx]-65,ny,nx});
					}
					else if(97<=(int)map[ny][nx]&&(int)map[ny][nx]<=122) {
						key[(int)map[ny][nx]-97]= true;
						int doorIdx = door.size();
						for(int i = 0; i < doorIdx; i++){
							int tmp2[] = door.poll();
	                        if(key[tmp2[0]]){
	                            q.offer(new int[] {tmp2[1],tmp2[2]});
	                        }else{
	                            door.offer(tmp2);
	                        }
	                        q.offer(new int[] {ny,nx});
	                    }
					}
					else {
						if(map[ny][nx]=='$') result++;
						q.offer(new int[] {ny,nx});
					}
				}
			}
			sb.append(result).append("\n");
		}
		System.out.println(sb);
	}
}