#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M;
    cin >> N >> M;
    if(N == 1)cout<<"Before";
    else if(N>2)cout<<"After";
    else{
        if(M<18)cout<<"Before";
        else if(M>18)cout<<"After";
        else cout<<"Special";
    }
}