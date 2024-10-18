#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, M;
    cin >> N >> M;
    if(N>2&&M<5)cout<<"TroyMartian\n";
    if(N<7&&M>1)cout<<"VladSaturnian\n";
    if(N<3&&M<4)cout<<"GraemeMercurian";
}