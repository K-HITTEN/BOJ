import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

class Main {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		sb.append("<");
		Deque <Integer> queue = new ArrayDeque();
		int N = Integer.parseInt(st.nextToken()), K = Integer.parseInt(st.nextToken());
		for(int i = 1; i <= N; i++) {
			queue.offer(i);
		}
		while(queue.size() != 1) {
			for(int i= 1; i < K; i++) {
				queue.offer(queue.poll());
			}
			sb.append(queue.poll()).append(", ");
		}
		sb.append(queue.poll()).append(">");
		System.out.println(sb);
	}

}
