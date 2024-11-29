#include<iostream>
#include<tuple>

using namespace std;  

tuple<int,int,int> dp[1000001];
int N, K, C, arr[1000001];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K >> C;
    for(int i = 1; i <= N; i++)cin >> arr[i];
    for(int i = 1; i <= N; i++){
        if(i-K>=0&&((get<0>(dp[i-K])+C == get<0>(dp[i-1])+arr[i]&&get<1>(dp[i-K])<get<1>(dp[i-1]))||get<0>(dp[i-K])+C < get<0>(dp[i-1])+arr[i])){
            dp[i] = dp[i-K];
            get<0>(dp[i]) += C;
            get<1>(dp[i])++;
            get<2>(dp[i]) = i-K;
        }else{
            dp[i] = dp[i-1];
            get<0>(dp[i]) += arr[i];
            get<2>(dp[i]) = i-1;
        }
    }
    cout << get<0>(dp[N])<< "\n" << get<1>(dp[N]) << "\n";
    int tmp = N;
    while(tmp!=0){
        if(get<1>(dp[tmp])!=get<1>(dp[get<2>(dp[tmp])]))cout<<get<2>(dp[tmp])+1<<" ";
        tmp = get<2>(dp[tmp]);
    }
}