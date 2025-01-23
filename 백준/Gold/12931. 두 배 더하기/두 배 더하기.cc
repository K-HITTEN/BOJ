#include<iostream>

using namespace std;

int B[51], N, ret = 0, cnt = 0;
bool FLAG;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> B[i];
        if(B[i] == 0)cnt++;
    }
    while(cnt != N){
        for(int i = 0; i < N; i++){
            if(B[i]%2){
                ret++;
                B[i]--;
                if(!B[i])cnt++;
            }
        }
        if(cnt == N)break;
        ret++;
        for(int i = 0; i < N; i++)B[i]/=2;
    }
    cout << ret;
}