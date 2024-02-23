import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class Solution {
	
	static StringBuilder sb = new StringBuilder();
	static List<List<Integer>> li = new ArrayList<>();
	static List<double[]> bridge = new ArrayList<>(); 
	static int N;
	static double E;
	static int arr[];
	public static void main(String[] args)throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int T = Integer.parseInt(st.nextToken()), tmp1,tmp2;
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			arr = new int[N];
			double sum = 0;
			for(int i = 0; i< N; i++) {
				arr[i] = i;
			}
			st = new StringTokenizer(br.readLine());
			for(int i = 0; i < N; i++) {
				li.add(new ArrayList<Integer>());
				li.get(i).add(Integer.parseInt(st.nextToken()));
			}
			st = new StringTokenizer(br.readLine());
			for(int i = 0; i < N; i++) {
				li.get(i).add(Integer.parseInt(st.nextToken()));
			}
			st = new StringTokenizer(br.readLine());
			E = Double.parseDouble(st.nextToken());
			for(int i = 0; i < N-1; i++) {
				for(int j = i+1; j<N; j++) {
					bridge.add(new double[] {i,j,Math.pow(li.get(i).get(0)-li.get(j).get(0),2)+Math.pow(li.get(i).get(1)-li.get(j).get(1), 2)}); 
				}
			}
			Collections.sort(bridge,(e1,e2)->(Double.compare(e1[2], e2[2])));
			for(int i = 0; i < bridge.size(); i++) {
				if(find((int)bridge.get(i)[0]) != find((int)bridge.get(i)[1])) {
					union((int)bridge.get(i)[0],(int)bridge.get(i)[1]);
					sum += (bridge.get(i)[2]*E);
				}
			}
			sb.append("#").append(t).append(" ").append(Math.round(sum)).append("\n");
			li.clear();
			bridge.clear();
		}
		System.out.println(sb);
	}
	static int find(int x) {
		if(arr[x] == x) return x;
		else return arr[x] = find(arr[x]); 
	}
	static void union(int x,int y) {
		int px = find(x), py = find(y);
		if(py>px)arr[py] = px;
		else arr[px] = py; 
	}
}
