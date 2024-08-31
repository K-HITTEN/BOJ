#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool arr[10];

int main(void){
    fastio;
    int N, tmp;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(!arr[tmp])arr[tmp] = true;
    }
    for(int i = 0; i < 10; i++){
        if(arr[i])cout << i <<'\n';
    }
}
