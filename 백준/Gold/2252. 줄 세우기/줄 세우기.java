import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.List;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int N = Integer.parseInt(st.nextToken()), M = Integer.parseInt(st.nextToken()),tmp1,tmp2;
		List<List<Integer>> li = new ArrayList<>();
		for(int i = 0; i <= N; i++) {
			List<Integer> a  = new ArrayList<>();
			li.add(a);
		}
		int arr[] = new int [N+1];
		for(int i = 0; i < M; i++) {
			st = new StringTokenizer(br.readLine());
			tmp1 = Integer.parseInt(st.nextToken());
			tmp2 = Integer.parseInt(st.nextToken());
			li.get(tmp1).add(tmp2);
			arr[tmp2]++;
		}
		Deque<Integer> q =  new ArrayDeque<>();
		for(int i = 1; i <= N; i++) {
			if(arr[i] == 0) q.offer(i);
		}
		while(!q.isEmpty()) {
			tmp1 = q.poll();
			for(int i = 0; i < li.get(tmp1).size(); i++) {
				arr[li.get(tmp1).get(i)]--;
				if(arr[li.get(tmp1).get(i)] == 0) q.offer(li.get(tmp1).get(i));
			}
			sb.append(tmp1).append(" ");
		}
		System.out.println(sb);
	}

}
