import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	
	static int R,C,finish[] = new int[2],dy[]= {-1,1,0,0},dx[]= {0,0,-1,1};
	static boolean hog[][], water[][];
	static char c;
	static Deque<int[]> wq = new ArrayDeque<>(),hq = new ArrayDeque<>();
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		R = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		water = new boolean[R][C];
		hog = new boolean[R][C];
		for(int i = 0; i < R; i++) {
			String s = br.readLine();
			for(int j = 0; j < C; j++) {
				c = s.charAt(j);
				if(c == '*') {
					wq.offer(new int[] {0,i,j});
					water[i][j] = true;
					hog[i][j] = true;
				}
				if(c == 'D') {
					water[i][j] = true;
					finish[0] = i;
					finish[1] = j;
				}
				if(c == 'S') {
					hq.offer(new int[] {0,i,j});
					hog[i][j] = true;
				}
				if(c == 'X') {
					water[i][j] = true;
					hog[i][j] = true;
				}
			}
		}
		int day = 0;
		while(!hq.isEmpty()) {
			while(!wq.isEmpty()&& wq.peek()[0] == day) {
				int [] tmp = wq.poll();
				for(int d = 0; d < 4; d++) {
					int ny = tmp[1]+dy[d], nx = tmp[2]+dx[d];
					if(ny<0||nx<0||ny>=R||nx>=C||water[ny][nx])continue;
					water[ny][nx] = true;
					hog[ny][nx] = true;
					wq.offer(new int[] {tmp[0]+1,ny,nx});
				}
			}
			while(!hq.isEmpty()&&hq.peek()[0]==day) {
				int [] tmp = hq.poll();
				if(tmp[1] == finish[0] && tmp[2] == finish[1]) {
					System.out.println(tmp[0]);
					return;
				}
				for(int d = 0; d < 4; d++) {
					int ny = tmp[1]+dy[d], nx = tmp[2]+dx[d];
					if(ny<0||nx<0||ny>=R||nx>=C||hog[ny][nx])continue;
					hog[ny][nx] = true;
					hq.offer(new int[] {tmp[0]+1,ny,nx});
				}
			}
			day++;
		}
		System.out.println("KAKTUS");
	}
}
