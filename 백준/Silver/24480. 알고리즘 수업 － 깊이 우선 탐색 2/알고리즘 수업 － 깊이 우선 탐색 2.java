import java.io.*;
import java.util.*;

class Main{
    static StringBuilder sb = new StringBuilder();
    static int N, M, R, a, b, cnt = 1;
    static int[] ret;
    static List<List<Integer>> list = new ArrayList<>();
    static boolean[] visited;
    
    
    static void dfs(int idx){
        visited[idx] = true;
        ret[idx] = cnt;
        cnt++;
        for(int i = 0; i < list.get(idx).size(); i++){
            if(!visited[list.get(idx).get(i)])dfs(list.get(idx).get(i));
        }
    }
    
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        R = Integer.parseInt(st.nextToken());
        ret = new int[N+1];
        visited =new boolean[N+1];
        for(int i = 0; i <= N; i++){
            List<Integer> tmp = new ArrayList<>();
            list.add(tmp);
        }
        for(int i = 0; i < M; i++){
            st = new StringTokenizer(br.readLine());
            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());
            list.get(a).add(b);
            list.get(b).add(a);
        }
        for(int i = 1; i <= N; i++)Collections.sort(list.get(i), Collections.reverseOrder());
        dfs(R);
        for(int i = 1; i <= N; i++)sb.append(ret[i]).append("\n");
        System.out.print(sb);
    }
}