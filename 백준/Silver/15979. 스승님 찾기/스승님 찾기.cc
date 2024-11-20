#include<iostream>

using namespace std;

int gcd(int x, int y){
    if(x<y)swap(x,y);
    if(y==0)return x;
    else return gcd(y,x%y);
}

int main() {
	cin.tie(0)->ios_base::sync_with_stdio(0);
	int N, M;
	cin >> N >> M;
	N = abs(N);
	M = abs(M);
	if(N==0&&M==0)cout<<0;
	else if(gcd(N,M)==1)cout<<1;
	else cout<< 2;
}