import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int Z(int N, int r, int c) {
		if(N==1) {
			return r*2+c;
		}
		else {
			int tmp = 1<< (N-1);
	        if(r>=tmp && c>=tmp){
	            return (tmp*tmp*3) + Z(N-1,r-tmp,c-tmp);
	        }else if(r >= tmp){
	            return (tmp*tmp*2) + Z(N-1,r-tmp,c);
	        }else if(c >= tmp){
	            return (tmp*tmp) + Z(N-1,r,c-tmp);   
	        }else{
	            return Z(N-1,r,c);
	        }
		}
	}

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken()), r = Integer.parseInt(st.nextToken()), c =Integer.parseInt(st.nextToken());
		N = 1 << N;
		System.out.println(Z(N,r,c));
	}

}
