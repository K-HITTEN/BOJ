#include<iostream>

using namespace std;

bool arr[4];
int a, b, N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    arr[1] = true;
    cin >> N;
    while(N--){
        cin >> a >> b;
        swap(arr[a], arr[b]);
    }
    for(int i = 1; i <= 3; i++){
        if(arr[i]){
            cout << i;
            return 0;
        }
    }
}