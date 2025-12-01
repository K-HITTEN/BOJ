import java.util.*;
import java.io.*;

class Main{
    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder());
        int a, tmp, N = Integer.parseInt(st.nextToken());
        while(N>0){
            st = new StringTokenizer(br.readLine());
            a = Integer.parseInt(st.nextToken());
            if(a == 0){
                if(pq.isEmpty())sb.append("-1\n");
                else sb.append(pq.poll()).append("\n");
            }else{
                while(a>0){
                    tmp = Integer.parseInt(st.nextToken());
                    pq.offer(tmp);
                    a--;
                }
            }
            N--;
        }
        System.out.print(sb);
    }
}