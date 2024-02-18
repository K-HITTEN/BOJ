import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int dy[] = {-1,1,0,0}, dx[] = {0,0,-1,1}; 
	static char map[][];
	static int max = 1,R,C;
	static boolean visited[] = new boolean[26];
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		R = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		String s;
		map = new char[R][C];
		for(int i = 0; i < R; i++) {
			s = br.readLine();
			for(int j = 0; j < C; j++) {
				map[i][j] = s.charAt(j);
			}
		}
		visited[(int)map[0][0]-65] = true;
		check(0, 0, 1);
		System.out.println(max);
	}
	public static void check(int y, int x, int count) {
		for(int i = 0; i < 4; i++) {
			int ny = y +dy[i], nx = x + dx[i];
			if(ny<0||nx<0||ny>=R||nx>=C||visited[(int)map[ny][nx]-65])continue;
			visited[(int)map[ny][nx]-65] = true;
			if(count+1>max)max = count+1;
			check(ny,nx,count+1);
			visited[(int)map[ny][nx]-65] = false;
		}
	}

}
