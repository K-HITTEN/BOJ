import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int N,d,k,c;
	static int[] sushi, eat;
	static int result = 0;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		d = Integer.parseInt(st.nextToken());
		k = Integer.parseInt(st.nextToken());
		c = Integer.parseInt(st.nextToken());
		sushi = new int[N];
		for(int i = 0; i <N; i++) {
			sushi[i] = Integer.parseInt(br.readLine());
		}
		int tmp = 0;
		eat = new int[d+1];
		boolean coupon = false;
		for(int i = 0; i < k; i++) {
			if(eat[sushi[i]] == 0) {
				if(sushi[i] == c) coupon = true;
				tmp++;
			}
			eat[sushi[i]]++;
		}
		if(!coupon)tmp++;
		result = tmp;
		for(int i = 0; i < N; i++) {
			eat[sushi[i]]--;
			if(eat[sushi[i]] == 0 && sushi[i] == c) {
				coupon = false;
				tmp++;
			}
			if(eat[sushi[i]] == 0) {
				tmp--;
			}
			if(sushi[(i+k)%N] == c && !coupon) {
				coupon = true;
				tmp--;
			}
			if(eat[sushi[(i+k)%N]] == 0) {
				tmp++;
			}
			eat[sushi[(i+k)%N]]++;
			if(tmp > result)result = tmp;
		}
		System.out.println(result);
	}

}
