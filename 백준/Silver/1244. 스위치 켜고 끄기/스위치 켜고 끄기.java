import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int []arr = new int [Integer.parseInt(st.nextToken())+1];
		st = new StringTokenizer(br.readLine());
		for(int i = 1; i< arr.length; i++) {
			arr[i] = Integer.parseInt(st.nextToken());
		}
		st = new StringTokenizer(br.readLine());
		int gender, num ,student = Integer.parseInt(st.nextToken());
		for(int i = 0; i<student; i++) {
			st = new StringTokenizer(br.readLine());
			gender = Integer.parseInt(st.nextToken());
			num = Integer.parseInt(st.nextToken());
			if(gender == 1) {
				for(int j = num; j<arr.length; j+=num) {
					if(arr[j] == 1) {
						arr[j] = 0;
					}else {
						arr[j] = 1;
					}
				}
			}else {
				if(arr[num] == 1) {
					arr[num] = 0;
				}else {
					arr[num] =1;
				}
				int j = 1;
				while((num+j<arr.length)&&(num-j>0)&&(arr[num+j]==arr[num-j])) {
					if(arr[num+j] == 0) {
						arr[num+j] = 1;
						arr[num-j] = 1;
					}else {
						arr[num+j] = 0;
						arr[num-j] = 0;
					}
					j++;
				}
			}
		}
		for(int i = 1; i < arr.length; i++) {
			System.out.print(arr[i] + " ");
			if(i%20 == 0) {
				System.out.println();
			}
		}
	}

}
