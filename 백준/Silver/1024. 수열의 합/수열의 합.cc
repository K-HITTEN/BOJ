#include<iostream>

using namespace std;

int N, L, l, n, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> L;
    for(int i = L; i <= 100; i++){
        l = i*(i-1)/2;
        n = N-l;
        if(n<0)continue;
        if(!(n%i)){
            tmp = n/i;
            while(i--){
                cout << tmp++ << ' ';
            }
            return 0;
        }
    }
    cout << -1;
}