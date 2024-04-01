import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Solution {
	
	static long factorial[] = new long[1000001];
	static final int MOD =1234567891;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int T = Integer.parseInt(st.nextToken()), N, R;
		factorial[1] = 1;
		for(int i = 2; i < 1000001; i++)factorial[i] = (factorial[i-1]*i)%MOD;
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			R = Integer.parseInt(st.nextToken());
			long top = factorial[N];
			long bottom = pow((factorial[N-R]*factorial[R])%MOD,MOD-2);
			sb.append("#").append(t).append(" ").append((top*bottom)%MOD).append("\n");
		}
		System.out.println(sb);
	}
	
	static long pow(long d, long expr) {
		if(expr == 0)return 1;
		else if(expr == 1)return d;
		long num = 1;
		while(expr > 0) {
			if(expr % 2 == 1) {
				num *= d;
				num %= MOD;
			}
			d = (d*d)%MOD;
			expr /=2;
		}
		return num;
	}

}
