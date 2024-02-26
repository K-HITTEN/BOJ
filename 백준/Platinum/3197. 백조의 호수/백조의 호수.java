import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Arrays;
import java.util.Deque;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {
	
	static int R,C, day = 0;
	static int[][] map;
	static boolean[][] visited, visited2;
	static int[] man = new int[2], dy = {-1,1,0,0}, dx = {0,0,-1,1};
	static String tmp;
	static PriorityQueue<int[]> pq = new PriorityQueue<>((o1,o2)->{
		return o1[0]-o2[0];
	});
	static Deque<int[]> meltingQ = new ArrayDeque<>();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		R = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		map = new int[R][C];
		for(int i = 0; i < R; i++) {
			tmp = br.readLine();
			for(int j = 0; j < C; j++) {
				if(tmp.charAt(j) == '.') map[i][j] = 0;
				else if(tmp.charAt(j) == 'X') map[i][j] = -1;
				else {
					map[i][j] = 1;
					man[0] = i;
					man[1] = j;
				}
			}
		}
		visited = new boolean[R][C];
		visited[man[0]][man[1]] = true;
		pq.offer(new int[] {0,man[0],man[1]});
		visited2 = new boolean[R][C];
		melting();		
		while(true) {
			if(findman()) {
				System.out.println(day);
				return;
			}else {
				while(!meltingQ.isEmpty() && meltingQ.peek()[0] == day) {
					int tmp[] = meltingQ.poll();
					map[tmp[1]][tmp[2]] = 0;
					for(int i = 0; i < 4; i++) {
						int ny = tmp[1]+dy[i], nx = tmp[2]+dx[i];
						if(ny<0 || nx<0 || ny >=R || nx >= C ||map[ny][nx] != -1||visited2[ny][nx])continue;
						visited2[ny][nx] = true;
						meltingQ.offer(new int[] {day+1,ny,nx});
					}
				}
				day++;
			}
		}
	}
	static boolean findman() {
		while(!pq.isEmpty() && pq.peek()[0] == day) {
			int tmp[] = pq.poll();
			for(int i = 0; i < 4; i++) {
				int ny = tmp[1]+dy[i], nx = tmp[2]+dx[i];
				if(ny < 0 || nx < 0 || ny >= R|| nx >= C|| visited[ny][nx])continue;
				visited[ny][nx] = true;
				if(map[ny][nx] == -1) {
					pq.offer(new int[] {day+1,ny,nx});
					continue;
				}
				if(map[ny][nx] == 1) return true;
				pq.offer(new int[] {day,ny,nx});
			}
		}
		return false;
	}
	static void melting() {
		Deque<int[]> q = new ArrayDeque<>();
		for(int i = 0; i < R; i++) {
			for(int j = 0; j < C; j++) {
				if(!visited2[i][j] && map[i][j] != -1) {
					q.offer(new int[] {i,j});
					visited2[i][j] = true;
				}
				while(!q.isEmpty()) {
					int tmp[] = q.poll();
					for(int d = 0; d < 4; d++) {
						int ny = tmp[0]+dy[d], nx = tmp[1]+dx[d];
						if(ny<0 || nx<0 || ny >=R || nx >= C ||visited2[ny][nx])continue;
						visited2[ny][nx] = true;
						if(map[ny][nx] == -1) {
							meltingQ.offer(new int[] {0,ny,nx});
						}
						else q.offer(new int[] {ny,nx});
					}
				}
			}
		}
		
	}
}
