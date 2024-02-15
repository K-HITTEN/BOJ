#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, count2 = 0, count5 = 0, tmp;
    cin >> N;
    for(int i = N; i >1; i--){
        tmp = i;
        while(tmp%2 == 0){
            count2++;
            tmp /= 2;
        }
        tmp = i;
        while(tmp%5 == 0){
            count5++;
            tmp /= 5;
        }
    }
    cout << min(count2,count5);
}