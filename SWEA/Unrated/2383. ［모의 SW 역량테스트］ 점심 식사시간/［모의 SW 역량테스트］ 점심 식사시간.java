import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Deque;
import java.util.List;
import java.util.StringTokenizer;

public class Solution {
	
	static int N;
	static int min_time = Integer.MAX_VALUE;
	static List<int[]>person = new ArrayList<>();
	static int stair[][] = new int[2][3];
	static StringBuilder sb = new StringBuilder();
	static boolean select[];
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int T = Integer.parseInt(st.nextToken());
		for(int t = 1; t <= T; t++) {
			min_time = Integer.MAX_VALUE;
			person.clear();
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			int stairCount = 0, tmp;
			for(int i = 0; i < N; i++) {
				st = new StringTokenizer(br.readLine());
				for(int j = 0; j < N; j++){
					tmp = Integer.parseInt(st.nextToken());
					if(tmp == 1) person.add(new int[] {i,j});
					if(tmp > 1) {
						stair[stairCount][0] = i;
						stair[stairCount][1] = j;
						stair[stairCount][2] = tmp;
						stairCount++;
					}
				}
			}
			select = new boolean[person.size()];
			comb(0);
			sb.append("#").append(t).append(" ").append(min_time).append("\n");
		}
		System.out.println(sb);
	}
	
	static void comb(int selectIdx) {
		if(selectIdx == person.size()) {
			//System.out.println("try");
			search();
			//System.out.println(min_time);
			return;
		}
		select[selectIdx] = true;
		comb(selectIdx+1);
		select[selectIdx] = false;
		comb(selectIdx+1);
	}
	
	static void search() {
		List<Integer> going_stair1 = new ArrayList<>(); 
		List<Integer> going_stair2 = new ArrayList<>();
		for(int i = 0; i < person.size(); i++) {
			if(select[i]) {
				going_stair1.add(Math.abs(person.get(i)[0] - stair[0][0])+Math.abs(person.get(i)[1] - stair[0][1]));
			}
			else {
				going_stair2.add(Math.abs(person.get(i)[0] - stair[1][0])+Math.abs(person.get(i)[1] - stair[1][1]));
			}
		}
		Deque<Integer> down_stair1 = new ArrayDeque<>();
		Deque<Integer> down_stair2 = new ArrayDeque<>();
		int time = 0;
		int p = person.size();
		while(p!=0) {
			time++;
			if(!down_stair1.isEmpty()) {
				int t = down_stair1.size();
				for(int i = 0; i < t; i++) {
					int tmp = down_stair1.poll();
					tmp--;
					if(tmp>0) down_stair1.offer(tmp);
					else {
						p--;
					}
				}
			}
			if(!down_stair2.isEmpty()) {
				int t = down_stair2.size();
				for(int i = 0; i < t; i++) {
					int tmp = down_stair2.poll();
					tmp--;
					if(tmp>0)down_stair2.offer(tmp);
					else {
						p--;
					}
				}
			}
			for(int i = 0; i < going_stair1.size(); i++) {
				if(going_stair1.get(i) == -1) continue;
				if(going_stair1.get(i) == 0 && down_stair1.size()<3) {
					down_stair1.offer(stair[0][2]);
					going_stair1.set(i, -1);
				}
				if(going_stair1.get(i)>0) going_stair1.set(i, going_stair1.get(i)-1);
				
			}
			for(int i = 0; i < going_stair2.size(); i++) {
				if(going_stair2.get(i) == -1) continue;
				if(going_stair2.get(i) == 0 && down_stair2.size()<3) {
					down_stair2.offer(stair[1][2]);
					going_stair2.set(i, -1);
				}
				if(going_stair2.get(i)>0) going_stair2.set(i, going_stair2.get(i)-1);
				
			}
			if(time>min_time) return;
		}
		min_time = time;
	}
}
