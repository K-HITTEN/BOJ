#include<iostream>

using namespace std;

int T, N, n, sum;
double tmp, ret;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    cout << fixed;
    cout.precision(1);
    while(T--){
        cin >> N;
        sum = ret = 0;
        for(int i = 0; i < N; i++){
            cin >> n >> tmp;
            sum += n;
            ret += tmp*n;
        }
        cout << sum << ' ' << ret/sum << '\n';
    }
}