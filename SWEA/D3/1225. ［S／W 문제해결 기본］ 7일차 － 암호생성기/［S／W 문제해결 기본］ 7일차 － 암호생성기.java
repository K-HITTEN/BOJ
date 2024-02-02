import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

class Solution {
	
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();
		Deque<Integer> queue = new ArrayDeque<>();
		for(int t = 1; t <= 10; t++) {
			st = new StringTokenizer(br.readLine());
			st = new StringTokenizer(br.readLine());
			for(int i = 0; i <8; i++) {
				queue.offer(Integer.parseInt(st.nextToken()));
			}
			int temp = -1;
			while(true) {
				for(int i = 1; i <= 5; i++) {
					temp = queue.poll()-i;
					if(temp <0) temp = 0;
					queue.offer(temp);
					if(temp == 0) break;
				}
				if(temp == 0) break;
			}
			sb.append("#").append(t).append(" ");
			for(int i = 0; i<8; i++) {
				sb.append(queue.poll()).append(" ");
			}
			sb.append("\n");
		}
		System.out.println(sb);
	}
}
