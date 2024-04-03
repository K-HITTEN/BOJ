import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int N, M,arr1[][],arr2[][],count,result;
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        result = 0;
        N  = Integer.parseInt(st.nextToken());
        M  = Integer.parseInt(st.nextToken());
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
        System.out.println(result);
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
