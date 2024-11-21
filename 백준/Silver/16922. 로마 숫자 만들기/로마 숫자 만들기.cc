#include<iostream>

using namespace std;

int N, ret = 0, src[4]={1,5,10,50};
bool visited[21][1001];

void perm(int stIdx, int sum){
    if(stIdx == N){
        if(!visited[N][sum]){
            visited[N][sum] = true;    
            ret++;
        }
        return;
    }
    for(int i = 0; i < 4; i++){
        if(visited[stIdx][sum+src[i]])continue;
        visited[stIdx][sum+src[i]] = true;
        perm(stIdx+1,sum+src[i]);
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    perm(0,0);
    cout << ret;
}