#include<iostream>

using namespace std;

int T, N, cnt;
bool check[101];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        fill(check,check+101,false);
        cin >> N;
        for(int i = 1; i <= N; i++){
            for(int j = i; j <= N; j+=i){
                check[j] = !check[j];
            }
        }
        cnt = 0;
        for(int i = 1; i <= N; i++)if(check[i])cnt++;
        cout << cnt << '\n';
    }
}