import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

class Main {
	
	static int arr[][];
	
	public static void rotate(int sy, int ey, int sx,int ex, long R) {
		if(sy>ey || sx>ex) return;
		Deque<Integer> queue = new ArrayDeque<>();
		for(int i = sx; i < ex; i++) {
			queue.offer(arr[sy][i]);
		}
		for(int i = sy; i <ey; i++) {
			queue.offer(arr[i][ex]);
		}
		for(int i = ex; i >sx; i--) {
			queue.offer(arr[ey][i]);
		}
		for(int i = ey; i >sy; i--) {
			queue.offer(arr[i][sx]);
		}
		int d = queue.size();
		long r = R%d;
		for(int i = 0; i <r; i++) {
			queue.offer(queue.pop());
		}
		for(int i = sx; i < ex; i++) {
			arr[sy][i] = queue.pop();
		}
		for(int i = sy; i <ey; i++) {
			arr[i][ex]= queue.pop();
		}
		for(int i = ex; i >sx; i--) {
			arr[ey][i] = queue.pop();
		}
		for(int i = ey; i >sy; i--) {
			arr[i][sx] = queue.pop();
		}
		rotate(sy+1,ey-1,sx+1,ex-1,R);
	}

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int N = Integer.parseInt(st.nextToken()), M = Integer.parseInt(st.nextToken());
		long R = Long.parseLong(st.nextToken());
		arr = new int [N][M];
		for(int i = 0 ; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for(int j = 0; j < M; j++) {
				arr[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		rotate(0,N-1,0,M-1,R);
		for(int i = 0; i < N; i++) {
			for(int j = 0; j< M; j++) {
				sb.append(arr[i][j]).append(" ");
			}
			sb.append("\n");
		}
		System.out.println(sb);
	}

}
