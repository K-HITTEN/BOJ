import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	
	static int[] dy = {-1,1,0,0}, dx = {0,0,-1,1};
	static int maxSafe = 0;
	static int map[][], N ,M,safe = -3, tgt[][] = new int[3][2];
	static List<int[]> virus = new ArrayList<>();
	static List<int[]> src = new ArrayList<>();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		map = new int[N][M];
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for(int j = 0; j < M; j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
				if(map[i][j] == 2)virus.add(new int[] {i,j});
				if(map[i][j] == 0) {
					src.add(new int[] {i,j});
					safe++;
				}
			}
		}
		comb(0,0);
		System.out.println(maxSafe);
	}
	static void comb(int srcIdx, int tgtIdx) {
		if(tgtIdx == 3) {
			test();
			return;
		}
		if(srcIdx == src.size())return;
		tgt[tgtIdx][0] = src.get(srcIdx)[0];
		tgt[tgtIdx][1] = src.get(srcIdx)[1];
		comb(srcIdx+1,tgtIdx+1);
		comb(srcIdx+1,tgtIdx);
	}
	static void test() {
		int copyMap[][] = new int[N][M];
		for(int i = 0; i < N; i++) {
			for(int j = 0; j < M; j++) {
				copyMap[i][j] = map[i][j];
			}
		}
		for(int i = 0; i<3; i++) {
			copyMap[tgt[i][0]][tgt[i][1]] = 1;
		}
		boolean visited[][] = new boolean[N][M];
		Deque <int[]> q = new ArrayDeque<>();
		for(int i = 0; i < virus.size(); i++) {
			q.offer(new int[] {virus.get(i)[0],virus.get(i)[1]});
			visited[virus.get(i)[0]][virus.get(i)[1]] = true;
		}
		int nsafe = safe;
		while(!q.isEmpty()) {
			int tmp[] = q.poll();
			for(int d = 0; d<4; d++) {
				int ny = tmp[0]+dy[d], nx = tmp[1]+dx[d];
				if(ny<0|| nx <0 ||ny>=N||nx>=M||visited[ny][nx]) continue;
				visited[ny][nx] = true;
				if(copyMap[ny][nx] == 1)continue;
				copyMap[ny][nx] = 2;
				q.offer(new int[] {ny,nx});
				nsafe--;
				if(maxSafe>nsafe)return;
			}
		}
		maxSafe = nsafe;
	}
}
