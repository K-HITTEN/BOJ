#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[500001][2];

int main(void) {
	fastio;
	int N, K, T = 1;
	cin >> N >> K;
	if(N == K){
	    cout << 0;
	    return 0;
	}
	queue <pair<int,int>> q;
	q.push({1,N});
	while(!q.empty()){
	    K += T;
	    if(K >500000){
	        cout << -1;
	        return 0;
	    }
	    while(!q.empty()&&q.front().first == T){
	        pair<int,int> tmp = q.front();
	        q.pop();
	        if(tmp.second+1<500001 && !visited[tmp.second+1][T%2]){
	            visited[tmp.second+1][T%2] = true;
	            q.push({T+1,tmp.second+1});
	        }
	        if(tmp.second-1>=0 && !visited[tmp.second-1][T%2]){
	            visited[tmp.second-1][T%2] = true;
	            q.push({T+1,tmp.second-1});
	        }
	        if(tmp.second*2<500001 && !visited[tmp.second*2][T%2]){
	            visited[tmp.second*2][T%2] = true;
	            q.push({T+1,tmp.second*2});
	        }
	    }
	    if(visited[K][T%2]){
	        cout << T;
	        return 0;
	    }
	    T++;
	}
	cout << -1;
}