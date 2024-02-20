import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	
	static int N,M;
	static List<int[]> home = new ArrayList<>();
	static List<int[]> chicken = new ArrayList<>();
	static int arr[][];
	static int tgt[];
	static int min_chicken = Integer.MAX_VALUE;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		int tmp;
		tgt = new int[M];
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for(int j = 0; j < N; j++) {
				tmp = Integer.parseInt(st.nextToken());
				if(tmp == 1) home.add(new int[] {i,j});
				else if(tmp == 2) chicken.add(new int[] {i,j});
			}
		}
		arr = new int[home.size()][chicken.size()];
		for(int i = 0; i < home.size(); i++) {
			for(int j = 0; j < chicken.size(); j++) {
				arr[i][j] = Math.abs(home.get(i)[0]-chicken.get(j)[0]) + Math.abs(home.get(i)[1]-chicken.get(j)[1]);
			}
		}
		comb(0,0);
		System.out.println(min_chicken);
	}
	
	static void comb(int srcIdx, int tgtIdx) {
		if(tgtIdx == M) {
			int sum = 0;
			for(int i = 0; i < home.size(); i++) {
				int min = Integer.MAX_VALUE;
				for(int j = 0; j < M; j++) {
					if(min>arr[i][tgt[j]]) min = arr[i][tgt[j]];
				}
				sum+=min;
			}
			if(min_chicken > sum) min_chicken = sum;
			return;
		}
		if(srcIdx == chicken.size())return;
		tgt[tgtIdx] = srcIdx;
		comb(srcIdx+1,tgtIdx+1);
		comb(srcIdx+1,tgtIdx);
	}
}
