#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    long long v1,j1,v2,j2,v3,d3,j3;
    cin >> v1 >> j1 >> v2 >> j2 >> v3 >> d3 >> j3;
    cout << v3*d3*j3*(v1*j1+v2*j2);
}