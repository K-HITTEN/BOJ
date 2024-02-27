import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static int dp[][];
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		dp = new int[N+1][3];
		for(int i = 1; i<= N; i++) {
			st = new StringTokenizer(br.readLine());
			dp[i][0] = Integer.parseInt(st.nextToken());
			dp[i][0] += Math.min(dp[i-1][1], dp[i-1][2]);
			dp[i][1] = Integer.parseInt(st.nextToken());
			dp[i][1] += Math.min(dp[i-1][0], dp[i-1][2]);
			dp[i][2] = Integer.parseInt(st.nextToken());
			dp[i][2] += Math.min(dp[i-1][0], dp[i-1][1]);
		}
		System.out.println(Math.min(dp[N][0],Math.min(dp[N][1],dp[N][2])));
	}

}
