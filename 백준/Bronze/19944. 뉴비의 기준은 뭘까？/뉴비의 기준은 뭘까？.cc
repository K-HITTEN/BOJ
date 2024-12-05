#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M;
    cin >> N >> M;
    if(M<3)cout<<"NEWBIE!";
    else if(M<=N)cout<<"OLDBIE!";
    else cout << "TLE!";
}