#include<iostream>

using namespace std;

int N, arr[20][20], ret = 10000;
bool visited[20];

void calc(int idx, int cnt){
    if(cnt==N/2){
        int t1=0,t2=0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i==j)continue;
                if(visited[i]&&visited[j])t1+=arr[i][j];
                else if(!visited[i]&&!visited[j])t2+=arr[i][j];
            }
        }
        ret = min(ret,abs(t1-t2));
        return;
    }
    if(idx==N)return;
    visited[idx]=true;
    calc(idx+1,cnt+1);
    visited[idx]=false;
    calc(idx+1,cnt);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    calc(0,0);
    cout << ret;
}