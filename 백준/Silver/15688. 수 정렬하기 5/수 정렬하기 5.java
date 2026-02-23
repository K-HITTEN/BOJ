import java.util.*;
import java.io.*;

public class Main
{
	public static void main(String[] args)throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		int N = Integer.parseInt(st.nextToken());
		List<Integer> list = new ArrayList<>();
		for(int i = 0; i < N; i++){
		    st = new StringTokenizer(br.readLine());
		    list.add(Integer.parseInt(st.nextToken()));
		}
		Collections.sort(list);
		for(int i = 0; i < N; i++){
		    sb.append(list.get(i)).append('\n');
		}
		System.out.print(sb);
	}
}
