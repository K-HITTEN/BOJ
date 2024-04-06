import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main{
    
  public static void main (String[]args) throws Exception{
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	int N, M, count = 0, IOI;
	String S;
	N = Integer.parseInt(br.readLine());
	M = Integer.parseInt(br.readLine());
	S = br.readLine();
	for(int i = 0; i < M-2; i++){
	    if(S.charAt(i) == 'O')continue;
	    IOI = 0;
	    while(i<M-2 && S.charAt(i+1) == 'O' && S.charAt(i+2) == 'I'){
	        IOI++;
	        if(IOI == N){
	            count++;
	            IOI--;
	        }
	        i+=2;
	    }
	}
	System.out.println(count);
    }
}
