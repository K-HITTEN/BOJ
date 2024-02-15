import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class Solution {
	static int N;
	static int [] src, tgt, start, end;
	static int [][] visit;
	static boolean[] select;
	static List<Integer> list = new ArrayList<>();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int T = Integer.parseInt(st.nextToken());
		for(int t = 1; t <= T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			st = new StringTokenizer(br.readLine());
			start = new int[] {Integer.parseInt(st.nextToken()),Integer.parseInt(st.nextToken())};
			end = new int[] {Integer.parseInt(st.nextToken()),Integer.parseInt(st.nextToken())};
			visit = new int[N][2];
			tgt = new int[N];
			src = new int[N];
			select = new boolean[N];
			for(int i = 0; i < N; i++) src[i] = i;
			for(int i = 0; i < N; i++) {
				visit[i][0] = Integer.parseInt(st.nextToken());
				visit[i][1] = Integer.parseInt(st.nextToken());
			}
			perm(0);
			Collections.sort(list);
			sb.append("#").append(t).append(" ").append(list.get(0)).append("\n");
			list.clear();
		}
		System.out.println(sb);
	}
	static void perm(int tgtIdx) {
		if(tgtIdx == tgt.length) {
			int sum = Math.abs(start[0]-visit[tgt[0]][0]) + Math.abs(start[1]-visit[tgt[0]][1]);
			for(int i = 1; i < N; i++)sum += Math.abs(visit[tgt[i-1]][0]-visit[tgt[i]][0]) + Math.abs(visit[tgt[i-1]][1]-visit[tgt[i]][1]);
			sum += Math.abs(visit[tgt[N-1]][0]-end[0])+Math.abs(visit[tgt[N-1]][1]-end[1]);
			list.add(sum);
			return;
		}
		
		for(int i = 0; i <src.length; i++) {
			if(select[i]) continue;
			tgt[tgtIdx] = src[i];
			select[i] = true;
			perm(tgtIdx + 1);
			select[i] = false;
		}
	}
}
