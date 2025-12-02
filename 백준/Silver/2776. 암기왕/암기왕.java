import java.io.*;
import java.util.*;

class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb =new StringBuilder();
        HashMap<String,String> map = new HashMap<>();
        int N, M, T = Integer.parseInt(st.nextToken());
        while(T>0){
            map.clear();
            st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N; i++){
                map.put(st.nextToken(),i+"");
            }
            st = new StringTokenizer(br.readLine());
            M = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < M; i++){
                if(map.containsKey(st.nextToken()))sb.append("1\n");
                else sb.append("0\n");
            }
            T--;
        }
        System.out.print(sb);
    }
}