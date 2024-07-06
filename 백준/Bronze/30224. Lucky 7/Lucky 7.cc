#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    if(N%7==0){
        while(N>0){
            if(N%10 == 7){
                cout << 3;
                return 0;
            }
            N /=10;
        }
        cout << 1;
    }else{
        while(N>0){
            if(N%10 == 7){
                cout << 2;
                return 0;
            }
            N /=10;
        }
        cout << 0;
    }
}