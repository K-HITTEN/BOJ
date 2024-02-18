import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int arr[][];
	static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		arr = new int[N+1][N+1];
		String s;
		for(int i = 1; i <= N; i++) {
			st = new StringTokenizer(br.readLine());
			s = st.nextToken();
			for(int j = 1; j <= N; j++) {
				arr[i][j] = arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
				arr[i][j] += (int)s.charAt(j-1)-48;
			}
		}
		check(0,0,N,N);
		for(int i = 1; i <= N; i++) {
			for(int j = 1; j <= N; j++) {
			}
		}
		System.out.println(sb);
	}
	
	static void check(int sx,int sy, int ex, int ey) {
		int pow = ex-sx;
		pow *= pow;
		int k = arr[ey][ex] - arr[sy][ex] - arr[ey][sx] + arr[sy][sx];
		
		if(k == pow)sb.append(1);
		else if(k == 0)sb.append(0);
		else {
			sb.append("(");
			check(sx,sy,(sx+ex)/2,(sy+ey)/2);
			check((sx+ex)/2,sy,ex,(sy+ey)/2);
			check(sx,(sy+ey)/2,(sx+ex)/2,ey);
			check((sx+ex)/2,(sy+ey)/2,ex,ey);
			sb.append(")");
		}
		
	}
}
