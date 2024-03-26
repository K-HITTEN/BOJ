import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int arr[][] = new int[101][2], dp[][] = new int[101][10001];
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken()), M = Integer.parseInt(st.nextToken()), sum = 0;
		st = new StringTokenizer(br.readLine());
		for(int i = 1; i <= N; i++) arr[i][0] = Integer.parseInt(st.nextToken());
		st = new StringTokenizer(br.readLine());
		for(int i = 1; i <= N; i++) {
			arr[i][1] = Integer.parseInt(st.nextToken());
			sum += arr[i][1];
		}
		for(int i = 1; i <= N; i++) {
			for(int j = 0; j <=sum; j++) {
				if(arr[i][1] <= j) {
					dp[i][j] = Math.max(dp[i-1][j], dp[i-1][j-arr[i][1]] + arr[i][0]);
					
				}
				else{
	                dp[i][j] = dp[i-1][j];
	            }
			}
		}
		for(int i = 0; i <=10000; i++){
	        if(dp[N][i]>=M){
	            System.out.println(i);
	            return;
	        }
	    }
		
	}

}
