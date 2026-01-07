#include<iostream>

using namespace std;

int N, P, score, arr[51], cnt, ranking = 1;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> score >> P;
    for(int i = 0; i < N; i++)cin >> arr[i];
    for(int i = 0; i < N; i++){
        if(arr[i] > score)ranking++;
        else if(arr[i] == score){}
        else break;
        cnt++;
    }
    if(cnt==P)ranking = -1;
    if(N==0)ranking = 1;
    cout << ranking;
}