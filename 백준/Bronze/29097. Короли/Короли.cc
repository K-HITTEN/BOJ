#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int n,m,k,a,b,c,ret;
    cin >> n >> m >> k >> a >> b >> c;
    ret = max({n*a,m*b,k*c});
    if(ret==n*a)cout << "Joffrey ";
    if(ret==m*b)cout << "Robb ";
    if(ret==k*c)cout << "Stannis";
}