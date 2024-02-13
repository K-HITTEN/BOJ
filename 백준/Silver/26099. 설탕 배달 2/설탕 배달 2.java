import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		long N = Long.parseLong(st.nextToken());
		long five = N/5;
		for(long i = five; i>=0; i--) {
			long n = N - 5*i;
			if(n%3 == 0) {
				System.out.println(i+n/3);
				return;
			}
		}
		System.out.println(-1);
	}
	
}
