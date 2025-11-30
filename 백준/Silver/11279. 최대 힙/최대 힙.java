import java.util.*;
import java.io.*;

class Main {
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
		int tmp, N = Integer.parseInt(st.nextToken());
		while(N>0) {
			st = new StringTokenizer(br.readLine());
			tmp = Integer.parseInt(st.nextToken());
			if(tmp == 0) {
				if(pq.isEmpty())sb.append("0\n");
				else sb.append(pq.poll()).append("\n");
			}
			else {
				pq.offer(tmp);
			}
			N--;
		}
		System.out.print(sb);
	}
}