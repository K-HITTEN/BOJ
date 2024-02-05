import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

class Main {

    static Deque<Integer> stack = new ArrayDeque<>();
    static Deque<Integer> num = new ArrayDeque<>();
    static int N;
    static StringBuilder sb = new StringBuilder();
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        for(int i = 1; i <= N; i++) {
        	int tmp = Integer.parseInt(st.nextToken());
        	if(stack.isEmpty()) {
        		sb.append(0).append(" ");
        		stack.push(tmp);
        		num.push(i);
        	}else {
        		while(!stack.isEmpty() &&stack.peek()<=tmp) {
        			stack.pop();
        			num.pop();
        		}
        		if(stack.isEmpty()) {
        			sb.append(0).append(" ");
        			stack.push(tmp);
        			num.push(i);
        		}
        		else {
        			sb.append(num.peek()).append(" ");
        			stack.push(tmp);
        			num.push(i);
        		}
        	}
        	
        }    
        System.out.println(sb);
    }

}