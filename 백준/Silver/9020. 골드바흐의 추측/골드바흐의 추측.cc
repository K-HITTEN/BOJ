#include<iostream>

using namespace std;

bool visited[10001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, N;
    cin >> T;
    for(int i = 2; i < 10001; i++){
        if(visited[i])continue;
        for(int j = i*2; j < 10001; j+=i){
            visited[j] = true;
        }
    }
    while(T--){
        cin >> N;
        for(int i = N/2; i >=2; i--){
            if(!visited[i]&&!visited[N-i]){
                cout << i << " " << N-i << "\n";
                break;
            }
        }
    }
}