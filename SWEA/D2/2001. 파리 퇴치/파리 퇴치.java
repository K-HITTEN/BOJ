import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Solution {
	
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int arr[][] = new int [16][16];
		int T = Integer.parseInt(st.nextToken());
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			int N = Integer.parseInt(st.nextToken()), M = Integer.parseInt(st.nextToken());
			for(int i = 1; i <=N; i++) {
				st = new StringTokenizer(br.readLine());
				for(int j = 1; j<=N; j++) {
					arr[i][j] = Integer.parseInt(st.nextToken()) + arr[i-1][j] + arr[i][j-1] - arr[i-1][j-1] ;
				}
			}
			int max = 0;
			for(int i = M; i <= N; i++) {
				for(int j = M; j<=N; j++) {
					if(max<arr[i][j] - arr[i-M][j] - arr[i][j-M] + arr[i-M][j-M]) {
						max = arr[i][j] - arr[i-M][j] - arr[i][j-M] + arr[i-M][j-M];
					}
				}
			}
			sb.append("#").append(t).append(" ").append(max).append("\n");
		}
		System.out.println(sb);
	}
}
