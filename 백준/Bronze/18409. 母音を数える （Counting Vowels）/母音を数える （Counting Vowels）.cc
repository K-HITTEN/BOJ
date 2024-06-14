#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, count = 0;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> c;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')count++;
    }
    cout << count;
}