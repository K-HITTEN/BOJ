import java.io.*;
import java.util.*;

class Main{
    
    static StringBuilder sb = new StringBuilder();
    static int N, M;
    static int[] tgt;
    static void backtracking(int idx){
        if(idx == M){
            for(int i = 0; i < M; i++)sb.append(tgt[i]).append(" ");
            sb.append("\n");
            return;
        }
        for(int i = 1; i <= N; i++){
            tgt[idx] = i;
            backtracking(idx+1);
        }   
    }
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        tgt = new int[M];
        backtracking(0);
        System.out.print(sb);
    }
}