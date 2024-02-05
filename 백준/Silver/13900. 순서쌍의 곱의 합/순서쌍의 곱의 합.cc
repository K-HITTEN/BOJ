#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio

using namespace std;

int main(void){
    long long N, tmp, sum ,result = 0;
    cin >> N;
    vector<int> arr;
    cin >> sum;
    for(int i = 1; i < N; i++){
        cin >> tmp;
        result += sum*tmp;
        sum += tmp;
    }
    cout << result;
}