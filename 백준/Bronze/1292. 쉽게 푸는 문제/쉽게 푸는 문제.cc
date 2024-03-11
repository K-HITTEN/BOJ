#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;
int arr[1005] = {0,};

int main(void){
    fastio;
    int A,B, sum = 0;
    cin >> A >> B;
    int i = 1, idx = 1;
    while(idx <= 1000){
        for(int j = 0; j < i; j++){
            arr[idx] = i;
            idx++;
            if(idx > 1000)break;
        }
        i++;
    }
    for(int a = A; a <= B; a++)sum+=arr[a];
    cout << sum;
}