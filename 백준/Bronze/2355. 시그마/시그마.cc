#include<iostream>
#include<algorithm>

using namespace std;

long long a, b;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> a >> b;
    if(a>b)swap(a,b);
    cout << (b-a+1)*(b+a)/2;
}