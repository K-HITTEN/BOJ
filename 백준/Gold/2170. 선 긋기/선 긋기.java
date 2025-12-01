import java.io.*;
import java.util.*;

class Main{
    static class Info implements Comparable<Info>{
        int a, b;
        Info(int a, int b){
            this.a = a;
            this.b = b;
        }
        
        @Override
        public int compareTo(Info other){
            if(this.a==other.a)return this.b-other.b;
            else return this.a-other.a;
        }
    }
    
    public static void main(String[] args)throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        List<Info> list = new ArrayList<>();
        int A, B, idx = 0, ret = 0, N = Integer.parseInt(st.nextToken());
        while(N>0){
            st = new StringTokenizer(br.readLine());
            A = Integer.parseInt(st.nextToken());
            B = Integer.parseInt(st.nextToken());
            list.add(new Info(A,B));
            N--;
        }
        Collections.sort(list);
        for(int i = 0; i < list.size(); i++){
            if(i == 0){
                idx = list.get(i).b;
                ret = list.get(i).b-list.get(i).a;
            }
            else if(idx>=list.get(i).b)continue;
            else{
                ret += list.get(i).b-Math.max(list.get(i).a, idx);
                idx = list.get(i).b;
            }
        }
        System.out.print(ret);
    }
}