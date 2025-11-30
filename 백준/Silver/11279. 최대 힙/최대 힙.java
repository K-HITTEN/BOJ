import java.util.*;
import java.io.*;

class Main {
    static class Info{
        int n;
        Info(int n){
            this.n = n;
        }
    }
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		PriorityQueue<Info> pq = new PriorityQueue<>((a,b)->b.n-a.n);
		int tmp, N = Integer.parseInt(st.nextToken());
		while(N>0) {
			st = new StringTokenizer(br.readLine());
			tmp = Integer.parseInt(st.nextToken());
			if(tmp == 0) {
				if(pq.isEmpty())sb.append("0\n");
				else sb.append(pq.poll().n).append("\n");
			}
			else {
				pq.offer(new Info(tmp));
			}
			N--;
		}
		System.out.print(sb);
	}
}