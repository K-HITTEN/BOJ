#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp, count = 0, sum = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        count += tmp/2;
        sum+= tmp;
    }
    if(sum%3!=0||sum/3>count)cout << "NO";
    else cout << "YES";
}