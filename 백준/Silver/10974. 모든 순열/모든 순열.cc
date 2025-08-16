#include<iostream>

using namespace std;

int tgt[8], N;
bool visited[9];

void calc(int idx){
    if(idx == N){
        for(int i = 0; i < N; i++)cout << tgt[i] << " ";
        cout << "\n";
        return;
    }
    for(int i = 1; i <= N; i++){
        if(visited[i])continue;
        visited[i] = true;
        tgt[idx] = i;
        calc(idx+1);
        visited[i] = false;
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    calc(0);
}