import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	
	static char src[], tgt[];
	static int L, C;
	static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		L = Integer.parseInt(st.nextToken());
		C = Integer.parseInt(st.nextToken());
		src = new char[C];
		tgt = new char[L];
		st = new StringTokenizer(br.readLine());
		for(int i = 0; i < C; i++) {
			src[i] = st.nextToken().charAt(0); 
		}
		Arrays.sort(src);
		comb(0,0,0,0);
		System.out.println(sb);
	}
	// B 자음 V 모음
	static void comb(int srcIdx, int tgtIdx, int B, int V) {
		if(tgtIdx == L) {
			if(B < 2 || V < 1 ) return;
			for(int i = 0; i < tgt.length; i++) {
				sb.append(tgt[i]);
			}
			sb.append("\n");
			return;
		}
		if(srcIdx == src.length)return;
		tgt[tgtIdx] = src[srcIdx];
		if(tgt[tgtIdx] == 'a' || tgt[tgtIdx] == 'e' || tgt[tgtIdx] == 'i' || tgt[tgtIdx] == 'o' || tgt[tgtIdx] == 'u') {
			comb(srcIdx+1,tgtIdx+1,B,V+1);
		}else comb(srcIdx+1,tgtIdx+1,B+1,V);
		comb(srcIdx+1,tgtIdx,B,V);
	}
}
