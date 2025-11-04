#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A = 100, B = 100, a, b, N;
    cin >> N;
    while(N--){
        cin >> a >> b;
        if(a>b)B-=a;
        else if(a<b)A-=b;
    }
    cout << A << '\n' << B;
}