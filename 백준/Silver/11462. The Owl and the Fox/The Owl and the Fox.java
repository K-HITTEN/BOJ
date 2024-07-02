import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Main {
    static String s;
    static int tmp;
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while (true){
            s = br.readLine();
            if (s.equals("END")){
                return;
            }
            tmp = Integer.parseInt(s);
            int d = 10;
            while(true){
                if(tmp%d == 0) d *= 10;
                else {
                    System.out.println(tmp - (d/10));
                    break;
                }
            } 
        }
    }
}
