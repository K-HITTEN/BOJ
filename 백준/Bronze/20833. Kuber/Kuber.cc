#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int count = 0, N;
    cin >> N;
    for(int i = 1; i <= N; i++)count+=(i*i*i);
    cout << count;
}