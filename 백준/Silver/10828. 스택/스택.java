import java.util.*;
import java.io.*;

class Main{
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();
        Stack<Integer> stack = new Stack<>();
        int tmp, N = Integer.parseInt(st.nextToken());
        String s;
        while(N>0){
            st = new StringTokenizer(br.readLine());
            s = st.nextToken();
            if(s.equals("push")){
                tmp = Integer.parseInt(st.nextToken());
                stack.push(tmp);
            }
            else if(s.equals("pop")){
                if(stack.isEmpty())sb.append("-1\n");
                else sb.append(stack.pop()).append("\n");
            }
            else if(s.equals("size")){
                sb.append(stack.size()).append("\n");
            }
            else if(s.equals("empty")){
                if(stack.isEmpty())sb.append("1\n");
                else sb.append("0\n");
            }
            else{
                if(stack.isEmpty())sb.append("-1\n");
                else sb.append(stack.peek()).append("\n");
            }
            N--;
        }
        System.out.print(sb);
    }
}