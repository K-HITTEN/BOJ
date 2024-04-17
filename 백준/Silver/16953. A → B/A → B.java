import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        long A = Long.parseLong(st.nextToken());
        long B = Long.parseLong(st.nextToken());
        int cnt = 0;
        
        while(true) {
            if(A == B) {
                cnt++;
                break;
            }else if(A > B) {
                cnt = -1;
                break;
            }
            
            if(B >= 10 && (B%10)== 1) {
                B /= 10;
                cnt++;
            }else if(B%2==0) {
                B /= 2;
                cnt++;
            }else{
                cnt = -1;
                break;
            }
        }
        if(cnt >= 0) System.out.println(cnt);
        else System.out.println(-1);
    }
}