import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Deque;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

class Solution {
	
	static int dx[] = {0,0,1,-1}, dy[] = {-1,1,0,0};
	
	public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		StringBuilder sb = new StringBuilder();
		Deque<Node> q = new ArrayDeque<>();
		int T = Integer.parseInt(st.nextToken()),N, arr[][];
		for(int t = 1; t <=T; t++) {
			st = new StringTokenizer(br.readLine());
			N = Integer.parseInt(st.nextToken());
			arr = new int[N][N];
			int room = 0, result = 0;
			for(int i = 0; i < N; i++) {
				st = new StringTokenizer(br.readLine());
				for(int j = 0; j < N; j++) {
					arr[i][j] = Integer.parseInt(st.nextToken());
					q.offer(new Node(j,i,arr[i][j],arr[i][j],1));
				}
			}
			while(!q.isEmpty()) {
				int  x = q.peek().x, y = q.peek().y, nstart = q.peek().start , ndata = q.peek().data, ncount = q.peek().count+1;
				q.poll();
				for(int i = 0; i <4; i++) {
					int nx = x + dx[i], ny = y + dy[i];
					if(nx<0 || ny <0 || nx>=N || ny>=N || arr[ny][nx] != (ndata+1)) continue;
					q.offer(new Node(nx,ny,nstart,ndata+1,ncount));
					if(result<ncount) {
						result = ncount;
						room = nstart;
					}else if(result == ncount && room > nstart) room = nstart;
				}
			}
			sb.append("#").append(t).append(" ").append(room).append(" ").append(result).append("\n");
		}
		System.out.println(sb);
	}
	static class Node{
		int x,y,start,data,count;
		
		Node(int x, int  y,int start,int data, int count){
			this.x= x;
			this.y = y;
			this.start = start;
			this.data = data;
			this.count = count;
		}
		
	}
}
