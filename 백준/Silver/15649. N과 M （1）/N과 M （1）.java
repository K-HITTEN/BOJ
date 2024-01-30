import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
// src 삭제 후 for 문 index 로 대체
// complete code 에서 printXX 대신 StringBuilder
public class Main {
	
	static int N,M;
	static int tgt[];
	static boolean select[];
	static StringBuilder sb = new StringBuilder();
	
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		
		tgt = new int[M];
		select = new boolean[N +1];
		
		perm(0);
		System.out.println(sb);
	}
	
	static void perm(int tgtIdx) {
		// 기저조건
		if(tgtIdx == M) {
			// Complete Code
			for(int n: tgt) {
				sb.append(n+" ");
			}
			sb.append('\n');
			return;
		}
		
		for(int i = 1; i <= N; i++) {
			if(select[i]) continue;
			tgt[tgtIdx] = i;
			select[i] = true;
			perm(tgtIdx + 1);
			select[i] = false;
		}
	}

}