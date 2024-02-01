import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Main {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		int bitter[] = new int[N], sour[] = new int[N];
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			sour[i] = Integer.parseInt(st.nextToken());
			bitter[i] = Integer.parseInt(st.nextToken());
		}
		int min = 1000000000;
		for(int i = 1; i < (1<<N); i++) {
			int bittersum = 0, soursum = 1;
			for(int j = 0; j < N; j++) {
				if((i&(1<<j)) != 0) {
					bittersum += bitter[j];
					soursum *= sour[j];
				}
			}
			if(bittersum - soursum <0) {
				if(soursum - bittersum<min) {
					min = soursum- bittersum;
				}
			}
			else{
				if(bittersum - soursum < min) {
					min = bittersum - soursum;
				}
			}
		}
		System.out.print(min);
	}

}
