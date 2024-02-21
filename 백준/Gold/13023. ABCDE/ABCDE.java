import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	
	static int N, M;
	static List<List<Integer>> li = new ArrayList<>();
	static boolean [] visited;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		int tmp, tmp2;
		for(int i = 0; i < N; i++) {
			List<Integer> temp = new ArrayList<>();
			li.add(temp);
		}
		for(int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			tmp = Integer.parseInt(st.nextToken());
			tmp2 = Integer.parseInt(st.nextToken());
			li.get(tmp).add(tmp2);
			li.get(tmp2).add(tmp);
		}
		for(int i = 0; i < N; i++) {
			visited = new boolean[N];
			visited[i] = true;
			if(dfs(i,0) == 1) {
				System.out.println(1);
				return;
			}
		}
		System.out.println(0);
	}
	
	static int dfs(int idx, int count){
		for(int i = 0; i < li.get(idx).size(); i++) {
			if(count == 4) return 1;
			if(!visited[li.get(idx).get(i)]) {
				visited[li.get(idx).get(i)] = true;
				if(dfs(li.get(idx).get(i),count+1) == 1) return 1;
				visited[li.get(idx).get(i)] = false;
			}
		}
		return 0;
	}

}
