#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	int N,s;
    cin >> N;
    vector<int> arr;
    for(int i = 0; i < N; i++){
        cin >> s;
        arr.push_back(s);
	}
    sort(arr.begin(), arr.end());
    cout << arr[N/2];
}