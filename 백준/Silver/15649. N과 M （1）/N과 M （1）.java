import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

import javax.swing.plaf.synth.SynthOptionPaneUI;

public class Main {
	
	static int src[], tgt[];
	static boolean select[];
	
	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s = br.readLine();
		int N = (int)s.charAt(0) -48 , M = (int)s.charAt(2) -48;
		src = new int[N];
		tgt = new int[M];
		select = new boolean[N];
		for(int i = 1; i<=N; i++) {
			src[i-1] = i;
		}
		perm(0);
	}
	
	static void perm(int tgtIdx) {
		if(tgtIdx == tgt.length) {
			for(int i = 0; i <tgt.length; i++){
				System.out.print(tgt[i] + " ");
			}
			System.out.println();
			return;
		}
		
		for(int i = 0; i < src.length; i++) {
			if(select[i] ) continue;
			
			tgt[tgtIdx] = src[i];
			select[i] = true;
			perm(tgtIdx +1);
			select[i] = false;
		}
	}

}
