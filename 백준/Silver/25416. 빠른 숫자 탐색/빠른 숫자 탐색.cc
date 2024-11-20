#include<iostream>
#include<queue>
#include<tuple>

using namespace std;

int arr[5][5], dy[4] = {-1,1,0,0}, dx[4] = {0,0,-1,1}, r, c;
bool visited[5][5];

int main() {
	cin.tie(0)->ios_base::sync_with_stdio(0);
	for(int i = 0; i < 5; i++){
	    for(int j = 0; j < 5; j++){
	        cin >> arr[i][j];
	        if(arr[i][j] == -1)visited[i][j] = true;
	    }
	}
	cin >> r >> c;
	visited[r][c] = true;
	queue<tuple<int,int,int>> q;
	q.push({0,r,c});
	while(!q.empty()){
	    tuple<int,int,int> tmp = q.front();
	    q.pop();
	    if(arr[get<1>(tmp)][get<2>(tmp)]){
	        cout << get<0>(tmp);
	        return 0;
	    }
	    for(int d = 0; d < 4; d++){
	        int ny = get<1>(tmp)+dy[d], nx = get<2>(tmp)+dx[d];
	        if(ny<0||nx<0||ny>=5||nx>=5||visited[ny][nx])continue;
	        visited[ny][nx] = true;
	        q.push({get<0>(tmp)+1,ny,nx});
	    }
	}
	cout << -1;
}