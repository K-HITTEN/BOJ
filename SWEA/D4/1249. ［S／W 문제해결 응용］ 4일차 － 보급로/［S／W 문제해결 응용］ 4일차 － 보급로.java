import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.PriorityQueue;

public class Solution {
	
	static int N;
	static int[][] map;
	static boolean[][] visited;
	static String s;
	static int[] dy = {-1,1,0,0}, dx = {0,0,-1,1}; 
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		int T = Integer.parseInt(br.readLine());
		for(int t = 1; t <=T; t++) {
			N = Integer.parseInt(br.readLine());
			map = new int[N][N];
			visited = new boolean[N][N];
			for(int i = 0; i < N; i++) {
				s = br.readLine();
				for(int j = 0; j < N; j++) {
					map[i][j] = (int)s.charAt(j)-'0';
				}
			}
			PriorityQueue<info> pq = new PriorityQueue<>();
			pq.add(new info(0,0,0));
			while(!pq.isEmpty()) {
				info tmp = pq.poll();
				if(tmp.y == N-1 && tmp.x == N-1) {
					sb.append("#").append(t).append(" ").append(tmp.c).append("\n");
					break;
				}
				if(visited[tmp.y][tmp.x])continue;
				visited[tmp.y][tmp.x] = true;
				for(int d = 0; d < 4; d++) {
					int ny = tmp.y+dy[d], nx = tmp.x+dx[d];
					if(ny<0||nx<0||ny>=N||nx>=N||visited[ny][nx])continue;
					pq.add(new info(ny,nx,tmp.c+map[ny][nx]));
				}
			}
		}
		System.out.println(sb);
	}
	static class info implements Comparable<info>{
		int y;
		int x;
		int c;
		public info(int y, int x, int c) {
			this.y = y;
			this.x = x;
			this.c = c;
		}
		@Override
		public int compareTo(info o) {
			return this.c-o.c;
		}
	}
}
