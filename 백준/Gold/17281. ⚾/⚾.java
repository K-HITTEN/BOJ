import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	
	static StringBuilder sb = new StringBuilder();
	static int N;
	static int tgt[]= new int[9];
	static int max_score = 0;
	static boolean visited[] = new boolean[9];
	static List<int[]> li = new ArrayList<>();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		for(int i = 0; i < N; i++) {
			int tmp[] = new int[9];
			st = new StringTokenizer(br.readLine());
			for(int j = 0; j < 9; j++) {
				tmp[j] = Integer.parseInt(st.nextToken());
			}
			li.add(tmp);
		}
		perm(0);
		System.out.println(max_score);
	}
	
	static void perm(int tgtIdx) {
		if(tgtIdx == 9) {
			if(tgt[3] != 0) return;
			int playerCount = 0;
			int score = 0;
			for(int i = 0; i < N; i++) {
				int outCount = 0;
				boolean ground[] = new boolean[3];
				while(outCount != 3) {
					if(li.get(i)[tgt[(playerCount%9)]] == 0) {
						outCount++;
					}else if(li.get(i)[tgt[(playerCount%9)]] == 1) {
						if(ground[2])score++;
						for(int j = 2; j >0; j--) {
							ground[j] = ground[j-1];
						}
						ground[0] = true;
					}else if(li.get(i)[tgt[(playerCount%9)]] == 2) {
						for(int j = 2; j >= 1; j--)if(ground[j])score++;
						ground[2] = ground[0];
						ground[1] = true;
						ground[0] = false;
					}else if(li.get(i)[tgt[(playerCount%9)]] == 3) {
						for(int j = 2; j >= 0; j--) {
							if(ground[j])score++;
							ground[j] = false;
						}
						ground[2] = true;
					}else {
						for(int j = 2; j >= 0; j--) {
							if(ground[j])score++;
							ground[j] = false;
						}
						score++;
					}
					playerCount++;
				}
			}
			if(max_score<score)max_score = score;
			return;
		}
		for(int i = 0; i <9; i++) {
			if(visited[i])continue;
			tgt[tgtIdx] = i;
			visited[i] = true;
			perm(tgtIdx+1);
			visited[i] = false;
		}
	}
	
}
