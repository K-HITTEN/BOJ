import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
	static int N, M, K, arr[],parent[];
	static boolean[] visit;
	static StringBuilder sb = new StringBuilder();

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		K = Integer.parseInt(st.nextToken());
		arr = new int[M];
		parent = new int [M+1];
		visit = new boolean[M];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < M; i++) {
		    arr[i] = Integer.parseInt(st.nextToken());
		    parent[i] = i;
		}
		st = new StringTokenizer(br.readLine());
		Arrays.sort(arr);
		for (int i = 0; i < K; i++) {
			int idx = find(lower_bound(Integer.parseInt(st.nextToken())));
			sb.append(arr[idx]).append("\n");
			union(idx,idx+1);
		}
		System.out.println(sb);
	}
    
	static int lower_bound(int n) {
		int start = 0;
		int end = M - 1;
		if (arr[0] > n) {
			return 0;
		}
		while (start < end) {
			int mid = (start + end) / 2;
			if (n >= arr[mid]) {
				start = mid + 1;
			} else {
				end = mid;
			}
		}
		return end;
	}
	
	static int find(int x){
        if(parent[x] == x)return x;
        return parent[x] = find(parent[x]);
    }
    
    static void union(int x, int y){
        int px = find(x), py = find(y);
        if(px>py)parent[py] = px;
        else parent[px] = py;
    }
}
