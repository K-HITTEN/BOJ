import java.io.BufferedReader;
import java.io.InputStreamReader;

class Solution {

	public static void main(String[] args) throws Exception {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());
		for(int i = 1; i <= T; i++) {
			int count = 0;
			String tmp = br.readLine();
            if(tmp.charAt(0) == '1') {
				count++;
			}
			for(int j = 1; j< tmp.length(); j++) {
				if(tmp.charAt(j-1) != tmp.charAt(j)) {
					count++;
				}
			}
			System.out.println("#" + i + " " +count);;
		}

	}
}
