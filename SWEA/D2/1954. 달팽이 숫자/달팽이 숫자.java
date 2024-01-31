import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Solution {
	
	public static int arr[][];
    
	public static void snail(int i, int j, int count) {
		if (i >= j) return;
		int c = count;
		for (int tmp = i; tmp < j; tmp++) {
			arr[i][tmp] = c;
			c++;
		}
		for (int tmp = i + 1; tmp < j; tmp++) {
			arr[tmp][j - 1] = c;
			c++;
		}
		for (int tmp = j - 2; tmp >= i; tmp--) {
			arr[j - 1][tmp] = c;
			c++;
		}
		for (int tmp = j - 2; tmp >= i + 1; tmp--) {
			arr[tmp][i] = c;
			c++;
		}
		snail(i + 1, j - 1, c);
	}
	
	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int T = Integer.parseInt(st.nextToken()), N;
		for (int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			arr = new int[N][N];
			snail(0, N, 1);
			sb.append("#").append(t).append('\n');
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++) {
					sb.append(arr[i][j]).append(' ');
				}
				sb.append('\n');
			}
		}
		System.out.println(sb);
	}
}
