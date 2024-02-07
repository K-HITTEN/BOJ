import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Main {
	
	static int arr[][] = new int[101][101];
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken()), k,w, result = 0;
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			k = Integer.parseInt(st.nextToken());
			w = Integer.parseInt(st.nextToken());
			for (int j = k; j < k + 10; j++) {
				for (int u = w; u < w + 10; u++) {
					arr[j][u] = 1;
				}
			}
		}
		for (int i = 0; i < 101; i++) {
			for (int j = 0; j < 101; j++) {
				if (arr[i][j] == 1) {
					result++;
				}
			}
		}
		System.out.println(result);
	}

}
