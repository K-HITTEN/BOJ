import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;

class Solution {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		for(int t = 1; t <= 10; t++) {
			String s = br.readLine();
			Deque<Character> stack = new ArrayDeque<>();
			int result = 1;
			String tmp = br.readLine();
			for(int i = 0; i < Integer.parseInt(s); i++) {
				switch (tmp.charAt(i)) {
				case '{' : stack.push('{'); break;
				case '[' : stack.push('['); break;
				case '(' : stack.push('('); break;
				case '<' : stack.push('<'); break;
				case '}' : 
					if(stack.peek() == '{') {
						stack.pop();
					}else {
						result = 0;
					}
					break;
				case ']' : 
					if(stack.peek() == '[') {
						stack.pop();
					}else {
						result = 0;
					}
					break;
				case ')' : 
					if(stack.peek() == '(') {
						stack.pop();
					}else {
						result = 0;
					}
					break;
				case '>' : 
					if(stack.peek() == '<') {
						stack.pop();
					}else {
						result = 0;
					}
					break;
				}
				if(result == 0) {
					break;
				}
			}
			if(stack.size() != 0) result = 0;
			sb.append("#").append(t).append(" ").append(result).append("\n");
		}
		System.out.println(sb);
	}

}
