#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<vector<int>> arr;
    int N, M, K, tmp;
    char c;
    cin >> N >> M >> K;
    int min = K*K, max = K*K;
    vector<int> arr2;
    for(int i = 0; i <=M; i++)arr2.push_back(0);
    arr.push_back(arr2);
    for (int i = 1; i <= N; i++) {
        vector<int> v;
        v.push_back(0);
		for (int j = 1; j <= M; j++) {
			cin >> c;
			tmp = arr[i-1][j] + v.back() - arr[i-1][j-1];
			if ((c == 'W' && i%2 == j%2) ||(c == 'B' && i%2 != j%2))tmp++;
			v.push_back(tmp);
		}
		arr.push_back(v);
	}
	for(int i = K; i <=N; i++){
	    for(int j = K; j <= M; j++){
	        tmp = arr[i][j]-arr[i-K][j]-arr[i][j-K]+arr[i-K][j-K];
	        if(tmp>max-tmp) tmp = max - tmp;
	        if(min>tmp)min = tmp;
	    }
	}
	cout << min;
}