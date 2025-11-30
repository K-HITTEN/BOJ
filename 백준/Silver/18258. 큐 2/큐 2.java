import java.util.*;
import java.io.*;

class Main{
    public static void main(String[] args)throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();
        Deque<Integer> queue = new ArrayDeque<>();
        int tmp, N = Integer.parseInt(st.nextToken());
        String s;
        while(N>0){
            st = new StringTokenizer(br.readLine());
            s = st.nextToken();
            if(s.equals("push")){
                tmp = Integer.parseInt(st.nextToken());
                queue.offer(tmp);
            }
            else if(s.equals("pop")){
                if(queue.isEmpty())sb.append("-1\n");
                else sb.append(queue.poll()).append("\n");
            }
            else if(s.equals("size")){
                sb.append(queue.size()).append("\n");
            }
            else if(s.equals("empty")){
                if(queue.isEmpty())sb.append("1\n");
                else sb.append("0\n");
            }
            else if(s.equals("front")){
                if(queue.isEmpty())sb.append("-1\n");
                else sb.append(queue.getFirst()).append("\n");
            }
            else if(s.equals("back")){
                if(queue.isEmpty())sb.append("-1\n");
                else sb.append(queue.getLast()).append("\n");
            }
            N--;
        }
        System.out.print(sb);
    }
}