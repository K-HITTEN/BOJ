import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	
	static int[][] arr;
	static int[] dy = {-1,1,0,0}, dx = {0,0,-1,1};
	static boolean visited1[][], visited2[][];
	static Deque <int[]> q = new ArrayDeque<>();
	static int N;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		int result1 = 0, result2 = 0;
		String tmp;
		arr = new int[N][N];
		visited1 = new boolean[N][N];
		visited2 = new boolean[N][N];
		for(int i = 0; i < N; i++) {
			tmp = br.readLine();
			for(int j = 0; j < N; j++) {
				if(tmp.charAt(j) == 'R') arr[i][j] = 2;
				else if(tmp.charAt(j) == 'G') arr[i][j] = 4;
				else arr[i][j] = 1;
			}
		}
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < N; j++) {
				if(!visited1[i][j]) {
					dfs1(i,j);
					result1++;
				}
				if(!visited2[i][j]) {
					dfs2(i,j);
					result2++;
				}
			}
		}
		System.out.println(result1 + " " + result2);
	}
	
	public static void dfs1(int y, int x){
		q.offer(new int[] {y,x});
		visited1[y][x] = true;
		while(!q.isEmpty()) {
			int [] tmp = q.poll();
			for(int i = 0; i < 4; i++) {
				int ny = tmp[0]+dy[i], nx = tmp[1]+dx[i];
				if(ny<0 || nx<0 || ny>=N || nx>=N || visited1[ny][nx]||arr[ny][nx]!=arr[y][x])continue;
				visited1[ny][nx] = true;
				q.offer(new int[] {ny,nx});
			}
		}
	}
	
	public static void dfs2(int y, int x){
		q.offer(new int[] {y,x});
		visited2[y][x] = true;
		while(!q.isEmpty()) {
			int [] tmp = q.poll();
			for(int i = 0; i < 4; i++) {
				int ny = tmp[0]+dy[i], nx = tmp[1]+dx[i];
				if(ny<0 || nx<0 || ny>=N || nx>=N || visited2[ny][nx]||arr[ny][nx]%2!=arr[y][x]%2)continue;
				visited2[ny][nx] = true;
				q.offer(new int[] {ny,nx});
			}
		}
	}
}
