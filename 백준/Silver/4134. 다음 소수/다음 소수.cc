#include<iostream>

using namespace std;

long long T, n;

bool find(long long idx){
    if(idx < 2)return false;
    if(idx == 2 || idx == 3)return true;
    for(long long i = 2; i*i<=idx; i++)if(!(idx%i))return false;
    return true;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> n;
        while(!find(n))n++;
        cout << n << '\n';
    }
}