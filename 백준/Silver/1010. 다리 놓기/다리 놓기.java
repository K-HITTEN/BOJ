import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int dp[][] = new int[31][31];
	static int N,M;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		for(int i = 1; i <31; i++) {
			for(int j = 1; j <= i; j++) {
				if(i == j)dp[i][j]=1;
				else if(j == 1)dp[i][j]=i;
				else dp[i][j] = dp[i-1][j]+dp[i-1][j-1];
			}
		}
		int T = Integer.parseInt(st.nextToken());
		for(int t = 0; t <T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			M = Integer.parseInt(st.nextToken());
			sb.append(dp[M][N]).append("\n");
		}
		System.out.println(sb);
	}
}
