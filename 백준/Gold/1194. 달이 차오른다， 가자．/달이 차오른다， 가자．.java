import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	
	static char map[][];
	static int dy[] = {-1,1,0,0},dx[] = {0,0,-1,1},N,M;
	static boolean visited[][][];
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		map = new char[N][M];
		visited = new boolean[N][M][1<<6];
		Deque<info> q = new ArrayDeque<>();
		for(int i = 0; i < N; i++) {
			String s = br.readLine();
			for(int j = 0; j < M; j++) {
				map[i][j] = s.charAt(j);
				if(map[i][j] == '0')q.offer(new info(i,j,0,0));
			}
		}
		while(!q.isEmpty()) {
			info tmp = q.poll();
			if(map[tmp.y][tmp.x] == '1') {
				System.out.println(tmp.move);
				return;
			}
			for(int d=0; d<4; d++) {
				int ny = tmp.y+dy[d],nx = tmp.x+dx[d];
				if(ny<0||nx<0||ny>=N||nx>=M||visited[ny][nx][tmp.key]||map[ny][nx] =='#')continue;
				if(65<=map[ny][nx] &&map[ny][nx]<=70 && (tmp.key&(1<<(map[ny][nx]-65)))==0) continue;
				visited[ny][nx][tmp.key] = true;
				if(97<=map[ny][nx] && map[ny][nx] <=102)q.offer(new info(ny,nx,tmp.key|(1<<(map[ny][nx]-97)),tmp.move+1));
				else q.offer(new info(ny,nx,tmp.key,tmp.move+1));
			}
		}
		System.out.println(-1);
	}
	
	static class info{
		int y,x,key,move;
		public info(int y, int x, int key, int move) {
			super();
			this.y = y;
			this.x = x;
			this.key = key;
			this.move = move;
		}
	}
}
