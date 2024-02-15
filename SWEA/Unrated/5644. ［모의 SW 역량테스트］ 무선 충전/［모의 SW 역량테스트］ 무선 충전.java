import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Deque;
import java.util.List;
import java.util.StringTokenizer;


public class Solution {
	
	static int dy[] = {0,-1,0,1,0}, dx[]= {0,0,1,0,-1};
	static boolean map[][][];
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int T = Integer.parseInt(st.nextToken());
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			int M = Integer.parseInt(st.nextToken()), A = Integer.parseInt(st.nextToken());
			int playerMove[][] = new int[2][M+1];
			map = new boolean [A+1][11][11];
			st = new StringTokenizer(br.readLine());
			for(int i = 1; i<=M; i++) {
				playerMove[0][i] = Integer.parseInt(st.nextToken());
			}
			st = new StringTokenizer(br.readLine());
			for(int i = 1; i<=M; i++) {
				playerMove[1][i] = Integer.parseInt(st.nextToken());
			}
			Deque<int[]> q = new ArrayDeque<>();
			int energy[] = new int[A+1];
			for(int i = 1; i<=A; i++) {
				st = new StringTokenizer(br.readLine());
				q.offer(new int[] {i,Integer.parseInt(st.nextToken()),Integer.parseInt(st.nextToken()),Integer.parseInt(st.nextToken()),1});
				energy[i] = Integer.parseInt(st.nextToken());	
			}
			while(!q.isEmpty()) {
				int[] info =  q.poll();
				if(!map[info[0]][info[2]][info[1]]) map[info[0]][info[2]][info[1]] = true;
				for(int i = 1; i <5; i++) {
					int ny = info[2]+dy[i], nx = info[1]+dx[i];
					if(ny<1 || nx <1 || ny>10 ||nx >10)continue;
					map[info[0]][ny][nx] = true;
					if(info[3]>info[4]) q.offer(new int[] {info[0],nx,ny,info[3],info[4]+1});
				}
			}
			int player1[] = {1,1}, player2[] = {10,10};
			int playersum =0;
			for(int i = 0; i<= M; i++) {
				if(playerMove[0][i] == 1)player1[0]--;
				else if(playerMove[0][i] == 2)player1[1]++;
				else if(playerMove[0][i] == 3)player1[0]++;
				else if(playerMove[0][i] == 4)player1[1]--;
				if(playerMove[1][i] == 1)player2[0]--;
				else if(playerMove[1][i] == 2)player2[1]++;
				else if(playerMove[1][i] == 3)player2[0]++;
				else if(playerMove[1][i] == 4)player2[1]--;
				List<int[]> list1 = new ArrayList<>();
				List<int[]> list2 = new ArrayList<>();
				for(int j = 1; j <= A; j++) {
					if(map[j][player1[0]][player1[1]]) {
						list1.add(new int[] {energy[j],j});
					}
					if(map[j][player2[0]][player2[1]]) {
						list2.add(new int[] {energy[j],j});
					}
				}
				Collections.sort(list1,(e1,e2)->{
					return e2[0] - e1[0];
				});
				Collections.sort(list2,(e1,e2)->{
					return e2[0] - e1[0];
				});
				if(list1.size() == 0 && list2.size()== 0)continue;
				if(list1.size()== 0) playersum += list2.get(0)[0];
				else if(list2.size() == 0) playersum += list1.get(0)[0];
				else if(list1.get(0)[1] != list2.get(0)[1]) {
					playersum += list1.get(0)[0];
					playersum += list2.get(0)[0];
				}else {
					if(list1.size() == 1 && list2.size() == 1) {
						playersum += (list1.get(0)[0]/2);
						playersum += (list2.get(0)[0]/2);
					}
					else if(list1.size() == 1) {
						playersum += list1.get(0)[0];
						playersum += list2.get(1)[0];
					}
					else if(list2.size() == 1) {
						playersum += list1.get(1)[0];
						playersum += list2.get(0)[0];
					}
					else if(list1.get(1)[0]>list2.get(1)[0]) {
						playersum += list1.get(1)[0];
						playersum += list2.get(0)[0];
					}else {
						playersum += list1.get(0)[0];
						playersum += list2.get(1)[0];
					}
				}
			}
			sb.append("#").append(t).append(" ").append(playersum).append("\n");
		}
		System.out.println(sb);
	}

}
