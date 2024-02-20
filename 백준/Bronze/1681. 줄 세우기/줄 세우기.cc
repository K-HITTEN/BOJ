#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[100001] = {0,};
    
int main(void){
    fastio;
    int N, L, i = 0, tmp;
    cin >> N >> L;
    while(N != 0){
        i++;
        tmp = i;
        while(tmp != 0){
            if(tmp % 10 == L)break;
            tmp /= 10;
        }
        if(tmp == 0)N--;
    }
    cout << i;
}