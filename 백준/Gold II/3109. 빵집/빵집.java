import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	static int arr[][], count = 0, R, C;
	static boolean visited[][];
	
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		R = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		arr = new int[R][C];
		visited = new boolean[R][C];
		String s;
		for(int i = 0; i < R; i++) {
			st = new StringTokenizer(br.readLine());
			s = st.nextToken();
			for(int j = 0; j < C; j++) {
				if(s.charAt(j) == '.') arr[i][j] = 0;
				else arr[i][j] = 1;
			}
		}
		for(int i = 0; i<R; i++) {
			if(check(i,0)) count++;
		}
		System.out.println(count);
	}
	
	public static boolean check(int y,int x) {
		if(x>=C-1) {
			return true;
		}else {
			boolean test = false;
			if(y>0 && arr[y-1][x+1] == 0) {
				test = check(y-1,x+1);
				arr[y-1][x+1] = 2;
			}
			if(test) return test;
			if(arr[y][x+1] == 0) {
				test = check(y,x+1);
				arr[y][x+1] = 2;
			}
			if(test)return test;
			if(y<R-1 &&arr[y+1][x+1] == 0) {
				arr[y+1][x+1] = 2;
				test = check(y+1,x+1);			
			}
			return test;
		}
	}

}
