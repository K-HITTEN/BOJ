#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, K, sum, tmp, min_val = 101, ret = 0;
    cin >> N >> M >> K;
    for(int i = 1; i <= N; i++){
        sum = 0;
        for(int j = 1; j <= M; j++){
            cin >> tmp;
            if(sum<K){
                sum+=tmp;
                if(sum>=K&&min_val>j){
                    min_val = j;
                    ret = i;
                }
            }
        }
    }
    cout << ret << " " << min_val;
}