import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.PriorityQueue;
import java.util.StringTokenizer;


public class Main {
	static List<List<int[]>> li = new ArrayList<>();	
	static int arr[];
	static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int V = Integer.parseInt(st.nextToken()), E = Integer.parseInt(st.nextToken());
		st = new StringTokenizer(br.readLine());
		int K = Integer.parseInt(st.nextToken());
		for(int i = 0;  i<= V; i++) {
			List<int[]> tmp = new ArrayList<>();
			li.add(tmp);
		}
		int u,v,w;
		for(int i = 0; i < E; i++) {
			st = new StringTokenizer(br.readLine());
			u = Integer.parseInt(st.nextToken());
			v = Integer.parseInt(st.nextToken());
			w = Integer.parseInt(st.nextToken());
			li.get(u).add(new int[] {v,w});
		}
		arr = new int[V+1];
		Arrays.fill(arr, -1);
		dijkstra(K);
		for(int i = 1; i <= V; i++) {
			if(arr[i] == -1) sb.append("INF").append("\n");
			else sb.append(arr[i]).append("\n");
		}
		System.out.println(sb);
		
	}
	static void dijkstra(int k) {
		PriorityQueue<int[]> pq = new PriorityQueue<>((e1,e2)->{
			return e1[0]- e2[0];
		});
		arr[k] = 0;
		pq.offer(new int[] {0,k});
		while(!pq.isEmpty()) {
			int tmp[] = pq.poll();
			if(tmp[0]> arr[tmp[1]]) continue;
			for(int i = 0; i < li.get(tmp[1]).size(); i++) {
				if((arr[li.get(tmp[1]).get(i)[0]] == -1) || (arr[li.get(tmp[1]).get(i)[0]] > tmp[0]+li.get(tmp[1]).get(i)[1])) {
					arr[li.get(tmp[1]).get(i)[0]] = tmp[0] + li.get(tmp[1]).get(i)[1];
					pq.offer(new int[] {tmp[0]+li.get(tmp[1]).get(i)[1],li.get(tmp[1]).get(i)[0]});
				}
			}
		}
	}
}
