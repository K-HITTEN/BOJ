#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[500001][2];

int main(void) {
	fastio;
	int N, K, T = 1, _size, tmp;
	cin >> N >> K;
	if(N == K){
	    cout << 0;
	    return 0;
	}
	queue <int> q;
	q.push(N);
	while(!q.empty()){
	    K += T;
	    if(K >500000){
	        cout << -1;
	        return 0;
	    }
	    if(visited[K][T%2]){
	        cout << T;
	        return 0;
	    }
	    _size = q.size();
	    while(_size--){
	        tmp = q.front();
	        q.pop();
	        if(tmp+1<500001){
	            if(tmp+1 == K){
	                cout << T;
	                return 0;
	            }
	            if(!visited[tmp+1][T%2]){
	                visited[tmp+1][T%2] = true;
	                q.push(tmp+1);
	            }
	        }
	        if(tmp-1>=0){
	            if(tmp-1 == K){
	                cout << T;
	                return 0;
	            }
	            if(!visited[tmp-1][T%2]){
	                visited[tmp-1][T%2] = true;
	                q.push(tmp-1);
	            }
	        }
	        if(tmp*2<500001){
	            if(tmp*2 == K){
	                cout << T;
	                return 0;
	            }
	            if(!visited[tmp*2][T%2]){
	                visited[tmp*2][T%2] = true;
	                q.push(tmp*2);
	            }
	        }
	    }
	    T++;
	}
	cout << -1;
}