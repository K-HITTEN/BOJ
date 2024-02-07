import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

class Main {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int N = Integer.parseInt(st.nextToken()), tmp;
		PriorityQueue<Integer> pq1 = new PriorityQueue<>(); 
		PriorityQueue<Integer> pq2 = new PriorityQueue<>((n1,n2)->n2-n1);
		for(int i = 0; i< N; i++) {
			st = new StringTokenizer(br.readLine());
			tmp = Integer.parseInt(st.nextToken());
			if(tmp <0) pq2.offer(tmp);
			else if(tmp>0)pq1.offer(tmp);
			else {
				if(pq1.isEmpty()  && pq2.isEmpty()) {
					sb.append(0).append("\n");
				}else if(pq1.isEmpty()) {
					sb.append(pq2.poll()).append("\n");
				}else if(pq2.isEmpty()) {
					sb.append(pq1.poll()).append("\n");
				}else {
					int tmp2 = pq1.peek();
					int tmp3 = pq2.peek()*-1;
					if(tmp2<tmp3)sb.append(pq1.poll()).append("\n");
					else sb.append(pq2.poll()).append("\n");
				}
			}
		}
		System.out.println(sb);
	}

}
