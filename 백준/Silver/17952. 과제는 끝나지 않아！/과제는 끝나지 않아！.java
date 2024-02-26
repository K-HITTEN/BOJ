import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {

	static int N, tmp;
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		Deque <int[]> stack = new ArrayDeque<>();
		long score = 0;
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			tmp = Integer.parseInt(st.nextToken());
			if(tmp == 0 && !stack.isEmpty()) {
				int arr[] = stack.pop();
				arr[1]--;
				if(arr[1] == 0)score+= arr[0];
				else stack.push(arr);
			}else if(tmp == 1) {
				int tmp2 = Integer.parseInt(st.nextToken());
				int tmp3 = Integer.parseInt(st.nextToken())-1;
				if(tmp3 == 0)score+= tmp2;
				else stack.push(new int[] {tmp2,tmp3});
			}
		}
		System.out.println(score);
	}

}
