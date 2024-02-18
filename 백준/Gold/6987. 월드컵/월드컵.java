import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	
	static List<List<Integer>> Match = new ArrayList<>();
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		StringBuilder sb = new StringBuilder();	
		for(int i = 0; i <5; i++) {
			for(int j = i+1; j < 6; j++) {
				List<Integer> match = new ArrayList<>();
				match.add(i);
				match.add(j);
				Match.add(match);
			}
		}
		int arr[][] = new int[6][3];
		for(int t = 0; t<4; t++) {
			int sum = 0;
			st = new StringTokenizer(br.readLine());
			for(int i = 0; i < 6; i++) {
				for(int j = 0 ;j <3; j++) {
					arr[i][j] = Integer.parseInt(st.nextToken());
					sum += arr[i][j];
				}
			}
			if(sum != 30) sb.append(0).append(" ");
			else if(check(0,arr)) sb.append(1).append(" ");
			else sb.append(0).append(" ");
		}
		System.out.println(sb);
	}
	static boolean check(int idx, int[][] v) {
		if(idx >= Match.size()) {
			for(int i = 0; i <6; i++) {
				for(int j = 0; j <3; j++) {
					if(v[i][j] != 0)return false;
				}
			}
			return true;
		}
		int arr[][] = v;
		boolean test = false;
		
		if(arr[Match.get(idx).get(0)][0]>0 && arr[Match.get(idx).get(1)][2]>0) {
			arr[Match.get(idx).get(0)][0]--;
			arr[Match.get(idx).get(1)][2]--;
			test = check(idx+1,arr);
			arr[Match.get(idx).get(0)][0]++;
			arr[Match.get(idx).get(1)][2]++;
		}
		if(test) return test;
		if(arr[Match.get(idx).get(0)][1]>0 && arr[Match.get(idx).get(1)][1]>0) {
			arr[Match.get(idx).get(0)][1]--;
			arr[Match.get(idx).get(1)][1]--;
			test = check(idx+1,arr);
			arr[Match.get(idx).get(0)][1]++;
			arr[Match.get(idx).get(1)][1]++;
		}
		if(test) return test;
		if(arr[Match.get(idx).get(0)][2]>0 && arr[Match.get(idx).get(1)][0]>0) {
			arr[Match.get(idx).get(0)][2]--;
			arr[Match.get(idx).get(1)][0]--;
			test = check(idx+1,arr);
			arr[Match.get(idx).get(0)][2]++;
			arr[Match.get(idx).get(1)][0]++;
		}
		return test;
	}
}
