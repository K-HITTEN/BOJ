import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Solution {
	
	static boolean bool = true, digit = false;
	static int N,tmp;
	static char arr[] = new char [201];
	
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();
		for(int t = 1; t <= 10; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			for(int i = 1; i <=N; i++) {
				st = new StringTokenizer(br.readLine());
				st.nextToken();
				arr[i] = st.nextToken().charAt(0);
			}
			search(1);
			if(bool) tmp = 1;
			else tmp = 0;
			sb.append("#").append(t).append(" ").append(tmp).append("\n");
			bool = true;
			digit = false;
		}
		System.out.println(sb);
	}
	
	public static void search(int tmp) {
		if(tmp*2<=N) search(tmp*2);
		if(Character.isDigit(arr[tmp])) {
			if(!digit)digit = true;
			else bool = false;
		}else {
			if(digit)digit = false;
			else bool = false;
		}		
		if(tmp*2+1 <= N) search(tmp*2+1);
	}

}
