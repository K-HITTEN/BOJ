import java.io.*;
import java.util.*;

public class Main {
    static String s;
    static int tmp;
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        while (true){
            s = br.readLine();
            if (s.equals("END")){
                System.out.print(sb);
                return;
            }
            tmp = Integer.parseInt(s);
            int d = 10;
            while(true){
                if(tmp%d == 0) d *= 10;
                else {
                    sb.append(tmp - (d/10)).append("\n");
                    break;
                }
            } 
        }
    }
}