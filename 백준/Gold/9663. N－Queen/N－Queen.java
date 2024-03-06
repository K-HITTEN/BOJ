import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
	
	static int N, count = 0;
	static boolean straight[] = new boolean[15];
	static boolean left_cross[] = new boolean[30];
	static boolean right_cross[] = new boolean[30];
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		search(0);
		System.out.println(count);
	}
	
	static void search(int idx) {
		if(idx == N){
	        count++;
	        return;
	    }
		for(int i = 0; i < N; i++){
	        if(!straight[i] && !left_cross[idx-i+15] && !right_cross[i+idx]){
	            straight[i] = true;
	            left_cross[idx-i+15] = true;
	            right_cross[i+idx] = true;
	            search(idx+1);
	            straight[i] = false;
	            left_cross[idx-i+15] = false;
	            right_cross[i+idx] = false;
	        }
	    }
	}
}
