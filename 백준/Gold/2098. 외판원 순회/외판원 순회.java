import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	
	static int arr[][], dist[][];
	static int N;
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		arr = new int[N][N];
		dist = new int[1<<16][N];
		for(int i = 0; i < N; i++) {
			st = new StringTokenizer(br.readLine());
			for(int j = 0; j < N; j++) {
				arr[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		System.out.println(TSP(0,0));
	}
	static int TSP(int v, int c){
		int visit = v;
		visit = v|(1<<c);
		if(visit == (1<<N)-1) {
			if(arr[c][0]>0)return arr[c][0];
			else return 16000001;
		}
		if(dist[visit][c] != 0)return dist[visit][c];
		dist[visit][c] = 16000001;
		for(int i = 0; i < N; i++) {
			if(((visit &(1<<i)) == 0) && arr[c][i]!= 0) {
				int tmp = TSP(visit,i) + arr[c][i];
				if(dist[visit][c]>tmp)dist[visit][c] = tmp;
			}
		}
		return dist[visit][c];
	}
}
