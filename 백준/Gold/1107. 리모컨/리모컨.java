import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int N, M;
	static int min_click = Integer.MAX_VALUE;
	static boolean notwork[] = new boolean[10];
	static int src[] = {0,1,2,3,4,5,6,7,8,9};
	static int tgt[];
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = null;
		N = Integer.parseInt(br.readLine());
		M = Integer.parseInt(br.readLine());
		int tmp;
		if(M != 0)st = new StringTokenizer(br.readLine());
		for(int i = 0; i < M; i++){
			tmp = Integer.parseInt(st.nextToken());
	        notwork[tmp] = true;
	    }
		if(N == 100){
	        System.out.println(0);
	        return;
	    }
		min_click = Math.abs(N-100);
		for(int i = 1; i <= 6; i++){
	        tgt = new int[i];
	        perm(0);
	    }
		System.out.println(min_click);
	}
	static void perm(int tgtIdx){
	    if(tgtIdx == tgt.length){
	        int tmp = 0;
	        for(int i = 0; i < tgt.length; i++){
	            tmp *= 10;
	            tmp += tgt[i];
	        }
	        int click = 0;
	        if(tmp != 100)click = tgt.length;
	        click += Math.abs(N-tmp);
	        if(min_click>click)min_click = click;
	        return;
	    }
	    for(int i = 0; i < 10; i++){
	        if(notwork[i])continue;
	        tgt[tgtIdx] = src[i];
	        perm(tgtIdx+1);
	    }
	}
}
