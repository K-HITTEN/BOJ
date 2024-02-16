#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[10];

int main(void){
    fastio;
    int T, N, M, tmp, answer;
    cin >> T;
    vector<int> v;
    queue <pair<int,int>> q;
    for(int t = 0; t < T; t++){
        cin >> N >> M;
        for(int i = 0 ; i < N; i++){
            cin >> tmp;
            arr[tmp]++;
            v.push_back(tmp);
            q.push({i,tmp});
        }
        int idx = 0;
        sort(v.begin(),v.end(),greater<int>());
        v.erase(unique(v.begin(),v.end()),v.end());
        while(true){
            if(v[idx] == q.front().second){
                answer++;
                if(q.front().first == M) break;
                arr[v[idx]]--;
                q.pop();
                if(arr[v[idx]] == 0) idx++;
            }
            else{
                q.push(q.front());
                q.pop();
            }
        }
        cout << answer << "\n";
        v.clear();
        while(!q.empty())q.pop();
        fill(arr,arr+10,0);
        answer = 0;
    }
}