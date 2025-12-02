import java.io.*;
import java.util.*;

class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb =new StringBuilder();
        Set<Integer> set = new HashSet<>();
        int N, M, T = Integer.parseInt(st.nextToken());
        while(T>0){
            set.clear();
            st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < N; i++){
                set.add(Integer.parseInt(st.nextToken()));
            }
            st = new StringTokenizer(br.readLine());
            M = Integer.parseInt(st.nextToken());
            st = new StringTokenizer(br.readLine());
            for(int i = 0; i < M; i++){
                if(set.contains(Integer.parseInt(st.nextToken())))sb.append("1\n");
                else sb.append("0\n");
            }
            T--;
        }
        System.out.print(sb);
    }
}