#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T, N;
    double W, C;
    cin >> T;
    while(T--){
        double ret = 0, max_val = 0;
        cin >> N;
        for(int i = 0; i < N; i++){
            cin >> W >> C;
            if((W/C>max_val)||(W/C == max_val && ret > C)){
                max_val = W/C;
                ret = C;
            }
        }
        cout << (int) ret << "\n";
    }
}