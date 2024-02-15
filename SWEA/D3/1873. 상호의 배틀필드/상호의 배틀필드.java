import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Solution {

    static char map[][];
    static int tank[] = new int[2];
    public static void main(String[] args) throws Exception{
        // TODO Auto-generated method stub
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        StringBuilder sb = new StringBuilder();
        int T = Integer.parseInt(st.nextToken()),N,H,W;
        String s;
        Deque <int[]> q = new ArrayDeque<>();
        for(int t = 1; t <= T; t++) {
            st = new StringTokenizer(br.readLine());
            H = Integer.parseInt(st.nextToken());
            W = Integer.parseInt(st.nextToken());
            map = new char[H][W];
            for(int i = 0; i < H; i++) {
                s= br.readLine();
                for(int j = 0; j < W; j++) {
                    map[i][j] = s.charAt(j);
                    if(s.charAt(j) == '<' || s.charAt(j) == '>' || s.charAt(j) == '^' || s.charAt(j) == 'v') {
                        tank[0] = i;
                        tank[1] = j;
                    }
                }
            }
            st = new StringTokenizer(br.readLine());
            N = Integer.parseInt(st.nextToken());
            if(N != 0){
                s = br.readLine();
                for(int i = 0; i < N; i++) {
                    if(s.charAt(i) == 'U') {
                        map[tank[0]][tank[1]] = '^';
                        if(tank[0] == 0 || map[tank[0]-1][tank[1]] != '.') continue;
                        map[tank[0]][tank[1]] = '.';
                        map[tank[0]-1][tank[1]] = '^';
                        tank[0]--;
                    }
                    else if(s.charAt(i) == 'D') {
                        map[tank[0]][tank[1]] = 'v';
                        if(tank[0] == H-1 || map[tank[0]+1][tank[1]] != '.') continue;
                        map[tank[0]][tank[1]] = '.';
                        map[tank[0]+1][tank[1]] = 'v';
                        tank[0]++;
                    }
                    else if(s.charAt(i) == 'L') {
                        map[tank[0]][tank[1]] = '<';
                        if(tank[1] == 0 || map[tank[0]][tank[1]-1] != '.') continue;
                        map[tank[0]][tank[1]] = '.';
                        map[tank[0]][tank[1]-1] = '<';
                        tank[1]--;
                    }
                    else if(s.charAt(i) == 'R') {
                        map[tank[0]][tank[1]] = '>';
                        if(tank[1] == W-1 || map[tank[0]][tank[1]+1] != '.') continue;
                        map[tank[0]][tank[1]] = '.';
                        map[tank[0]][tank[1]+1] = '>';
                        tank[1]++;
                    }else {
                        int dy = 0,dx = 0;
                        if(map[tank[0]][tank[1]] == '^')dy =-1;
                        else if(map[tank[0]][tank[1]] == 'v')dy = 1;
                        else if(map[tank[0]][tank[1]] == '<')dx = -1;
                        else dx = 1;
                        q.offer(new int[] {tank[0]+dy,tank[1]+dx});
                        while(!q.isEmpty()) {
                            int [] pos = q.poll();
                            if(pos[0] < 0 || pos[1]<0 || pos[0]>=H|| pos[1]>=W)continue;
                            if(map[pos[0]][pos[1]] =='.'||map[pos[0]][pos[1]] =='-')q.offer(new int[] {pos[0]+dy,pos[1]+dx});
                            else if(map[pos[0]][pos[1]] =='*')map[pos[0]][pos[1]]='.';
                        }
                    }
                }
            }
            sb.append("#").append(t).append(" ");
            for(int i = 0; i < H; i++) {
                for(int j = 0; j < W; j++) {
                    sb.append(map[i][j]);
                }
                sb.append("\n");
            }
        }
        System.out.println(sb);
    }

}