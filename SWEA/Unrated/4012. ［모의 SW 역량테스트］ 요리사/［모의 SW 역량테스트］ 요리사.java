import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class Solution {
	
	static StringBuilder sb = new StringBuilder();
	static int N;
	static int[] src;
	static int [][] flavor;
	static boolean []select;
	static List<Integer> answer = new ArrayList<>();
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int T = Integer.parseInt(st.nextToken());
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			select = new boolean [N];
			src = new int[N];
			flavor = new int[N][N];
			for(int i = 0; i < N; i++) {
				src[i] = i;
				st = new StringTokenizer(br.readLine());
				for(int j = 0; j < N; j++) {
					flavor[i][j] = Integer.parseInt(st.nextToken());
				}
			}
			comb(0,0);
			Collections.sort(answer);
			sb.append("#").append(t).append(" ").append(answer.get(0)).append("\n");
			answer.clear();
		}
		System.out.println(sb);
	}
	static void comb(int srcIdx, int selectIdx) {
		if(selectIdx == N/2) {
			List<Integer> food1 = new ArrayList<>();
			List<Integer> food2 = new ArrayList<>();
			for(int i = 0; i < select.length; i++) {
				if(select[i])food1.add(i);
				else food2.add(i);
			}
			int food1sum = 0, food2sum = 0;
			for(int i = 0; i<food1.size(); i++) {
				for(int j = 0; j <food1.size(); j++) {
					food1sum += flavor[food1.get(i)][food1.get(j)];
				}
			}
			for(int i = 0; i<food2.size(); i++) {
				for(int j = 0; j <food2.size(); j++) {
					food2sum += flavor[food2.get(i)][food2.get(j)];
				}
			}
			answer.add(Math.abs(food1sum-food2sum));
			return;
		}
		if(srcIdx == src.length) return;
		select[srcIdx] = true;
		comb(srcIdx + 1, selectIdx +1);
		select[srcIdx] = false;
		comb(srcIdx + 1, selectIdx);
	}
}
