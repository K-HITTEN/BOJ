import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Solution {
	
	static int T,N,tmp,sum,min_value,map[][] = new int[1001][1001];
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();
		T = Integer.parseInt(br.readLine());
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			min_value = Integer.MAX_VALUE;
			for(int i = 0; i < N; i++){
	            for(int j = 0; j < N; j++){
	                map[i][j] = Integer.parseInt(st.nextToken());
	                if(map[i][j] == 0)map[i][j] = 1000;
	            }
	            map[i][i] = 0;
	        }
			for(int k = 0; k < N; k++){
	            for(int i = 0; i < N; i++){
	                for(int j = 0; j <N; j++){
	                    map[i][j] = Integer.min(map[i][j],map[i][k]+map[k][j]);
	                }
	            }
	        }
			for(int i = 0; i < N; i++){
	            sum = 0;
	            for(int j = 0; j < N; j++){
	                sum+=map[i][j];
	            }
	            min_value = Integer.min(min_value,sum);
	        }
			sb.append("#").append(t).append(" ").append(min_value).append("\n");
		}
		System.out.println(sb);
	}
}
