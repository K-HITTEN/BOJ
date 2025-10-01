#include<iostream>
#include<vector>

using namespace std;

int T, N , cnt;
vector<int> v;
bool check[1000001], visited[1000001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    check[0] = check[1] = true;
    for(int i = 2; i < 1000001; i++){
        if(check[i])continue;
        v.push_back(i);
        for(int j = i*2; j < 1000001; j+=i)check[j] = true;
    }
    cin >> T;
    while(T--){
        cin >> N;
        fill(visited,visited+1000001,false);
        cnt = 0;
        for(int i = 0; i < v.size(); i++){
            if(v[i]>= N)break;
            if(visited[v[i]])continue;
            if(check[N-v[i]])continue;
            visited[v[i]] = visited[N-v[i]] = true;
            cnt++;
        }
        cout << cnt << '\n';
    }
}