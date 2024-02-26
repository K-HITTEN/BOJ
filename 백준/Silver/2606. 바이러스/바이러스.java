import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int arr[], N, C, tmp1, tmp2;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		arr = new int[N+1];
		for(int i = 1; i <= N; i++) {
			arr[i] = i;
		}
		C = Integer.parseInt(br.readLine());
		for(int i = 0; i < C; i++) {
			st = new StringTokenizer(br.readLine());
			tmp1 = Integer.parseInt(st.nextToken());
			tmp2 = Integer.parseInt(st.nextToken());
			union(tmp1,tmp2);
		}
		int count = 0;
		for(int i = 2; i <= N; i++) {
			if(find(i) == 1) count++;
		}
		System.out.println(count);
	}
	
	static void union(int t1, int t2) {
		int temp1 = find(t1), temp2 = find(t2);
		if(temp1 < temp2) arr[temp2] = temp1;
		else arr[temp1] = temp2;
	}
	
	static int find(int t1) {
		if(t1 == arr[t1])return t1;
		else return arr[t1] = find(arr[t1]);
	}
}
