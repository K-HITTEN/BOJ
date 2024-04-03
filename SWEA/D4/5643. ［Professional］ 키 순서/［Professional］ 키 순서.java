import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Solution {
	
	static int T, N, M,arr1[][],arr2[][],count,result;
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
		StringBuilder sb = new StringBuilder();
		T = Integer.parseInt(br.readLine());
		Deque<Integer> q = new ArrayDeque<>();
        for(int t=1; t<=T; t++) {
            result = 0;
            N  = Integer.parseInt(br.readLine());
            M  = Integer.parseInt(br.readLine());
            arr1 = new int[N+1][N+1];
		    arr2 = new int[N+1][N+1];
            for(int i = 0; i < M; i++) {
            	st = new StringTokenizer(br.readLine());
            	int tmp = Integer.parseInt(st.nextToken()), tmp2 = Integer.parseInt(st.nextToken());
            	arr1[tmp][tmp2] = 1;
            	arr2[tmp2][tmp] = 1;
            }
            for(int i = 1; i <= N; i++) {
            	count = 0;
            	dfs(i,arr1,new boolean[N+1]);
            	dfs(i,arr2,new boolean[N+1]);
            	if(count == N-1)result++;
            }
            sb.append("#").append(t).append(" ").append(result).append("\n");
        }
        System.out.println(sb);
	}
    static void dfs(int n, int arr[][], boolean visited[]){
        visited[n] = true;
        for(int i = 1; i <= N; i++){
            if(arr[n][i] == 1 && !visited[i]){
                count++;
                dfs(i,arr,visited);
            }
        }
    }
}
