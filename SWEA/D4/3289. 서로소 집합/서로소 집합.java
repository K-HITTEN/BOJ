import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Solution {
	
	static int T, n, m;
	static int[] parent; // index: 원소, value: 부모 원소, 최상위 부모 : index == value
	static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		T = Integer.parseInt(br.readLine());
		
		for(int t = 1; t<=T; t++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			n = Integer.parseInt(st.nextToken());
			m = Integer.parseInt(st.nextToken());
			
			// 풀이 
			parent = new int[n+1];
			makeSet();
			sb.append("#").append(t).append(" ");
			for(int i = 0; i < m; i++) {
				st = new StringTokenizer(br.readLine());
				int op = Integer.parseInt(st.nextToken());
				int x = Integer.parseInt(st.nextToken());
				int y = Integer.parseInt(st.nextToken());
				if(op == 0) {
					union(x,y);
				}else {
					if(findSet(x) == findSet(y)) sb.append(1);
					else sb.append(0);
				}
			}
			sb.append("\n");
		}
		System.out.println(sb);
	}
	static void makeSet() {
		for(int i = 1; i <= n; i++) {
			parent[i] = i;
		}
	}
	
	// pass compression
	static int findSet(int x) {
		if(parent[x] == x) return x;
		else return findSet(parent[x]); // x 의 바로 위 부모가 최상위가 아니므로 x 의 부모의 부모를 또 찾는다.
	}
	
	static void union(int x, int y) {
		int px = findSet(x), py = findSet(y);
		// 어떻게 합칠것 인가?
		// #1 앞 x 가 부모가 되도록
		if(py>px)parent[py] = px;
		else parent[px] = py;
	}
}
