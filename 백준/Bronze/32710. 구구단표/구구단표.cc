#include<iostream>

using namespace std;

bool check[101];
int N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 2; i < 10; i++){
        for(int j = 1; j < 10; j++){
            check[i] = check[j] = check[i*j] = true;
        }
    }
    cin >> N;
    cout << check[N];
}