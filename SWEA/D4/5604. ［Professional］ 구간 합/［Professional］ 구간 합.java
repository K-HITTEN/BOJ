import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Solution {
	
	static int T;
	static long A,B, ans;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		T = Integer.parseInt(br.readLine());
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			A = Long.parseLong(st.nextToken());
			B = Long.parseLong(st.nextToken());
			
			ans = 0;
			long pos = 1;
			while(A<=B) {
				while(A%10 != 0 && A<=B) {
					calc(A,pos);
					A++;
				}
				if(A>B||A==0&&B==0)break;
				while(B%10 != 9  && A <= B) {
					calc(B,pos);
					B--;
				}
				A /= 10;
				B /= 10;
				long m = (B-A+1)*pos;
				ans += 45*m;
				pos*=10;
			}
			sb.append("#").append(t).append(" ").append(ans).append("\n");
		}
		System.out.println(sb);
	}
	
	static void calc(long n, long t) {
		while(n > 0) {
			ans += (n%10)*t;
			n /= 10;
		}
	}
}
