import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Solution {

	static int kywin = 0, iywin = 0;
	static int[] ky= new int[9], iy= new int[9];
	static boolean[] selectKy = new boolean[9];
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int N = Integer.parseInt(st.nextToken());
		for(int t = 1; t<= N; t++) {
			st = new StringTokenizer(br.readLine());
			Arrays.fill(ky, 0);;
			Arrays.fill(iy, 0);
			kywin = 0;
			iywin = 0;
			for(int i = 0; i <9; i++) {
				ky[i] = Integer.parseInt(st.nextToken());
			}
			Arrays.sort(ky);
			int tmp = 0, tmp2 = 0;
			for(int i = 1; i <= 18; i++) {
				if(tmp<9&&ky[tmp] == i)tmp++;
				else {
					iy[tmp2] = i;
					tmp2++;
				}
			}
			dfs(0,0,0);
			sb.append("#").append(t).append(" ").append(kywin).append(" ").append(iywin).append("\n");
		}
		System.out.println(sb);
	}
	
	static void dfs(int i , long kysum, long iysum) {
		if(i == 9) {
			if(kysum > iysum)kywin++;
			else if(iysum > kysum)iywin++;
			return;
		}
		for(int x = 0; x<9; x++) {
			if(selectKy[x])continue;
			selectKy[x] = true;
			if(ky[x]>iy[i])dfs(i+1,kysum+(ky[x]+iy[i]),iysum);
			else dfs(i+1,kysum,iysum+(ky[x]+iy[i]));
			selectKy[x] = false;
		}
	}
}
