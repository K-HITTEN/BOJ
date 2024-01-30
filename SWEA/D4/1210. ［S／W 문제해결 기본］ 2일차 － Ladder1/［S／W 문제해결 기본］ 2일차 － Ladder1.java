import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

class Solution {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		int arr[][] = new int[100][100];
		int dx[] = {-1,1,0};
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();
		for(int t = 1; t<=10; t++) {
			int y = 99,x = 0;
			st = new StringTokenizer(br.readLine());
			for(int i = 0; i< 100; i++) {
				st = new StringTokenizer(br.readLine());
				for(int j = 0; j <100; j++) {
					arr[i][j] = Integer.parseInt(st.nextToken());
				}
			}
			for(int i = 0; i< 100; i++) {
				if(arr[99][i] == 2) {
					x = i;
					break;
				}
			}
			while(y != 0) {
				y--;
				if((x+dx[0]>=0)&&(x+dx[0]<100)&&(arr[y][x+dx[0]] == 1)) {
					while((x+dx[0]>=0)&&(x+dx[0]<100)&&(arr[y][x+dx[0]] == 1)) {
						x = x+dx[0];
					}
				}else if((x+dx[1]>=0)&&(x+dx[1]<100)&&(arr[y][x+dx[1]] == 1)) {
					while((x+dx[1]>=0)&&(x+dx[1]<100)&&(arr[y][x+dx[1]] == 1)) {
						x = x+dx[1];
					}
				}
			}
			sb.append("#").append(t).append(" ").append(x).append("\n");
		}
		System.out.println(sb);
	}
}