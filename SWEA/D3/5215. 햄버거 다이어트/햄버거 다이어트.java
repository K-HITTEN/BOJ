import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Solution {
	
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();	
		List<Integer> sl = new ArrayList<>();
		List<Integer> cl = new ArrayList<>();
		int score[], calorie[], N, L, T= Integer.parseInt(st.nextToken());
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			int max = 0;
			N = Integer.parseInt(st.nextToken());
			L = Integer.parseInt(st.nextToken());
			score = new int[N];
			calorie = new int[N];
			for(int i = 0; i < N; i++) {
				st = new StringTokenizer(br.readLine());
				score[i] = Integer.parseInt(st.nextToken());
				calorie[i] = Integer.parseInt(st.nextToken());
			}
			for(int i = 0; i < N; i++) {
				int tmp = cl.size();
				for(int j = 0; j<tmp; j++) {
					if(cl.get(j) + calorie[i] >L) continue;
					cl.add(cl.get(j)+calorie[i]);
					if(sl.get(j)+score[i] >max) max = sl.get(j)+score[i];
					sl.add(sl.get(j)+score[i]);
				}
				if(calorie[i] >L) continue;
				cl.add(calorie[i]);
				sl.add(score[i]);
				if(score[i] >max) max = score[i];
			}
			sb.append("#").append(t).append(" ").append(max).append("\n");
			sl.clear();
			cl.clear();
		}
		System.out.println(sb);
	}

}
