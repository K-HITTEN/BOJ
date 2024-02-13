import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int N = Integer.parseInt(st.nextToken()), count = 0;
		List<List<Integer>> li = new ArrayList<>();
		int arr[][] = new int[N][2];
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			arr[i][0] = Integer.parseInt(st.nextToken());
			arr[i][1] = Integer.parseInt(st.nextToken());
		}
		Arrays.sort(arr,(o1,o2) -> o1[0]-o2[0]);
		List<Integer> tmp;
		for(int i = 0; i < N; i++) {
			int pass = 0;
			for(int j = 0; j < li.size(); j++) {
				if(li.get(j).get(0) >= arr[i][0] && li.get(j).get(1) <= arr[i][1]) {
					pass =1;
					break;
				}
				else if(li.get(j).get(0) < arr[i][0] && li.get(j).get(1) > arr[i][1]) {
					pass =1;
					li.get(j).set(0, arr[i][0]);
					li.get(j).set(1, arr[i][1]);
					break;
				}
				else if(li.get(j).get(0) < arr[i][0] && li.get(j).get(1) >= arr[i][0]) {
					pass =1;
					li.get(j).set(0, arr[i][0]);
					break;
				}
				else if(li.get(j).get(1) > arr[i][1] && li.get(j).get(0) <= arr[i][1]) {
					pass = 1;
					li.get(j).set(1, arr[i][1]);
					break;
				}
			}
			if(pass == 0) {
				tmp = new ArrayList<>();
				tmp.add(arr[i][0]);
				tmp.add(arr[i][1]);
				li.add(tmp);
			}
		}
		System.out.println(li.size());
	}

}
