import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Deque;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	
	static List<List<Integer>> li = new ArrayList<>();
	static boolean visited[];
	static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken()), M = Integer.parseInt(st.nextToken()), V = Integer.parseInt(st.nextToken()),tmp1,tmp2;
		visited = new boolean[N+1];
		for(int i = 0; i<=N; i++) {
			List<Integer> tmp = new ArrayList<>();
			li.add(tmp);
		}
		for(int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			tmp1 = Integer.parseInt(st.nextToken());
			tmp2 = Integer.parseInt(st.nextToken());
			li.get(tmp1).add(tmp2);
			li.get(tmp2).add(tmp1);
		}
		for(int i = 1; i <= N; i++)Collections.sort(li.get(i));
		dfs(V);
		sb.append("\n");
		visited = new boolean[N+1];
		bfs(V);
		System.out.println(sb);
	}
	static void dfs(int idx) {
		visited[idx] = true;
		sb.append(idx).append(" ");
		for(int i = 0; i < li.get(idx).size(); i++) {
			if(visited[li.get(idx).get(i)])continue;
			else dfs(li.get(idx).get(i));
		}
	}
	static void bfs(int idx) {
		visited[idx] = true;
		sb.append(idx).append(" ");
		Deque <Integer> q = new ArrayDeque<>();
		q.offer(idx);
		while(!q.isEmpty()) {
			int tmp = q.poll();
			for(int i = 0; i < li.get(tmp).size(); i++) {
				if(visited[li.get(tmp).get(i)]) continue;
				else {
					q.offer(li.get(tmp).get(i));
					sb.append(li.get(tmp).get(i)).append(" ");
					visited[li.get(tmp).get(i)] = true;
				}
			}
		}
	}
}
