import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.StringTokenizer;

public class Main {
	
	static int dy[] = {-1,1,0,0}, dx[] = {0,0,-1,1};
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken());
		boolean visited[][][] = new boolean[N][N][2];
		int[][] map = new int [N][N], B = new int [4][2], E = new int [3][2];
		int Bcount = 0, Ecount = 0;
		for(int i = 0; i < N; i++) {
			String s = br.readLine();
			for(int j = 0; j < N; j++) {
				if(s.charAt(j) == 'B') {
					B[Bcount][0] = i;
					B[Bcount][1] = j;
					Bcount++;
					map[i][j] = 0;
				}
				else if(s.charAt(j) == 'E') {
					E[Ecount][0] = i;
					E[Ecount][1] = j;
					Ecount++;
					map[i][j] = 0;
				}
				else if(s.charAt(j) == '1') {
					visited[i][j][0] = true;
					visited[i][j][1] = true;
					map[i][j] = 1;
				}
				else map[i][j] = 0;
			}
		}
		B[3][0] = 0;
		Deque<int[][]> q = new ArrayDeque<>();
		q.offer(B);
		if(B[1][0]-1 == B[0][0])visited[B[1][0]][B[1][1]][0] = true;
		else visited[B[1][0]][B[1][1]][1] = true;
		while(!q.isEmpty()) {
			int[][] tmp = q.poll();
			boolean FLAG = false;
			if(tmp[1][0]-1 == tmp[0][0])FLAG = true;
			for(int d = 0; d < 4; d++) {
				int[][] ntmp = new int[4][2];
				ntmp[0][0] = tmp[0][0] + dy[d];
				ntmp[0][1] = tmp[0][1] + dx[d];
				ntmp[1][0] = tmp[1][0] + dy[d];
				ntmp[1][1] = tmp[1][1] + dx[d];
				ntmp[2][0] = tmp[2][0] + dy[d];
				ntmp[2][1] = tmp[2][1] + dx[d];
				ntmp[3][0] = tmp[3][0] + 1;
				if(ntmp[0][0]<0||ntmp[1][0]<0||ntmp[2][0]<0||ntmp[0][1]<0||ntmp[1][1]<0||ntmp[2][1]<0)continue;
				if(ntmp[0][0]>=N||ntmp[1][0]>=N||ntmp[2][0]>=N||ntmp[0][1]>=N||ntmp[1][1]>=N||ntmp[2][1]>=N)continue;
				if(FLAG && (visited[ntmp[1][0]][ntmp[1][1]][0] || map[ntmp[2][0]][ntmp[2][1]] == 1 || map[ntmp[0][0]][ntmp[0][1]] == 1))continue;
				if(!FLAG && (visited[ntmp[1][0]][ntmp[1][1]][1] ||map[ntmp[2][0]][ntmp[2][1]] == 1 || map[ntmp[0][0]][ntmp[0][1]] == 1))continue;
				if(FLAG)visited[ntmp[1][0]][ntmp[1][1]][0] = true;
				else visited[ntmp[1][0]][ntmp[1][1]][1] = true;
				if(ntmp[0][0]==E[0][0]&&ntmp[1][0]==E[1][0]&&ntmp[2][0]==E[2][0]&&ntmp[0][1]==E[0][1]&&ntmp[1][1]==E[1][1]&&ntmp[2][1]==E[2][1]) {
					System.out.println(ntmp[3][0]);
					return;
				}
				q.offer(ntmp);
			}
			if(FLAG) {
				int[][] ntmp = new int[4][2];
				ntmp[0][0] = tmp[1][0];
				ntmp[0][1] = tmp[1][1]-1;
				ntmp[1][0] = tmp[1][0];
				ntmp[1][1] = tmp[1][1];
				ntmp[2][0] = tmp[1][0];
				ntmp[2][1] = tmp[1][1]+1;
				ntmp[3][0] = tmp[3][0] + 1;
				if(ntmp[0][0]<0||ntmp[1][0]<0||ntmp[2][0]<0||ntmp[0][1]<0||ntmp[1][1]<0||ntmp[2][1]<0)continue;
				if(ntmp[0][0]>=N||ntmp[1][0]>=N||ntmp[2][0]>=N||ntmp[0][1]>=N||ntmp[1][1]>=N||ntmp[2][1]>=N) continue;
				if(visited[ntmp[1][0]][ntmp[1][1]][1] || map[ntmp[2][0]+1][ntmp[2][1]] == 1 ||map[ntmp[2][0]-1][ntmp[2][1]] == 1 ||map[ntmp[2][0]][ntmp[2][1]] == 1||map[ntmp[0][0]+1][ntmp[0][1]] == 1||map[ntmp[0][0]-1][ntmp[0][1]] == 1 ||map[ntmp[0][0]][ntmp[0][1]] == 1)continue;
				visited[ntmp[1][0]][ntmp[1][1]][1] = true;
				if(ntmp[0][0]==E[0][0]&&ntmp[1][0]==E[1][0]&&ntmp[2][0]==E[2][0]&&ntmp[0][1]==E[0][1]&&ntmp[1][1]==E[1][1]&&ntmp[2][1]==E[2][1]) {
					System.out.println(ntmp[3][0]);
					return;
				}
				q.offer(ntmp);
			}else {
				int[][] ntmp = new int[4][2];
				ntmp[0][0] = tmp[1][0]-1;
				ntmp[0][1] = tmp[1][1];
				ntmp[1][0] = tmp[1][0];
				ntmp[1][1] = tmp[1][1];
				ntmp[2][0] = tmp[1][0]+1;
				ntmp[2][1] = tmp[1][1];
				ntmp[3][0] = tmp[3][0] + 1;
				if(ntmp[0][0]<0||ntmp[1][0]<0||ntmp[2][0]<0||ntmp[0][1]<0||ntmp[1][1]<0||ntmp[2][1]<0)continue;
				if(ntmp[0][0]>=N||ntmp[1][0]>=N||ntmp[2][0]>=N||ntmp[0][1]>=N||ntmp[1][1]>=N||ntmp[2][1]>=N)continue;
				if(visited[ntmp[1][0]][ntmp[1][1]][0] || map[ntmp[2][0]][ntmp[2][1]] == 1 ||map[ntmp[2][0]][ntmp[2][1]+1] == 1 || map[ntmp[2][0]][ntmp[2][1]-1] == 1 || map[ntmp[0][0]][ntmp[0][1]+1] == 1|| map[ntmp[0][0]][ntmp[0][1]-1] == 1 ||map[ntmp[0][0]][ntmp[0][1]] == 1)continue;
				visited[ntmp[1][0]][ntmp[1][1]][0] = true;
				if(ntmp[0][0]==E[0][0]&&ntmp[1][0]==E[1][0]&&ntmp[2][0]==E[2][0]&&ntmp[0][1]==E[0][1]&&ntmp[1][1]==E[1][1]&&ntmp[2][1]==E[2][1]) {
					System.out.println(ntmp[3][0]);
					return;
				}
				q.offer(ntmp);
			}
		}
		System.out.println(0);
	}

}
