#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int arr[1001];
bool visited[1001];

int main(){
    fastio;
    int T, N, cnt;
    cin >> T;
    while(T--){
        cin >> N;
        cnt = 0;
        fill(visited, visited+1001, false);
        for(int i = 1; i <= N; i++)cin>> arr[i];
        for(int i = 1; i <= N; i++){
            if(!visited[i]){
                cnt++;
                visited[i] = true;
                queue<int> q;
                q.push(i);
                while(!q.empty()){
                    int tmp = q.front();
                    q.pop();
                    if(!visited[arr[tmp]]){
                        visited[arr[tmp]] = true;
                        q.push(arr[tmp]);
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
}
