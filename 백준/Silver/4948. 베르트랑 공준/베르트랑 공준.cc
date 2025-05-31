#include<iostream>

using namespace std;

bool check[250000];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, cnt = 0;
    while(true){
        cin >> N;
        if(!N)break;
        fill(check,check+250000,false);
        for(int i = 2; i <=2*N; i++){
            if(!check[i]){
                for(int j = 2*i; j <=2*N; j+=i)check[j]=true;
            }
        }
        cnt = 0;
        for(int i = N+1; i<=2*N; i++)if(!check[i])cnt++;
        cout << cnt << "\n";
    }
}