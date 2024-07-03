#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T;
    cin >> T;
    cout<<fixed;
    cout.precision(3);
    vector<int> v;
    for(int t = 0; t < T; t++){
        double sum = 0, N, count = 0;
        cin >> N;
        v.resize(N);
        for(int i = 0; i < N; i++){
            cin >> v[i];
            sum += v[i];
        }
        double avg = sum/N;
        for(int i = 0; i < N; i++){
            if(v[i]>avg)count++;
        }
        double d = count/N*100;
        cout << d << "%\n";
    }
}