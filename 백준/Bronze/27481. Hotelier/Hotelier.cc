#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[10];

int main(void){
    fastio;
    int N;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> c;
        if(c == 'L'){
            for(int j = 0; j < 10; j++){
                if(arr[j] == 0){
                    arr[j] = 1;
                    break;
                }
            }
        }else if(c == 'R'){
            for(int j = 9; j >=0; j--){
                if(arr[j] == 0){
                    arr[j] = 1;
                    break;
                }
            }
        }else{
            arr[(int)c-48] = 0;
        }
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i];
    }
}