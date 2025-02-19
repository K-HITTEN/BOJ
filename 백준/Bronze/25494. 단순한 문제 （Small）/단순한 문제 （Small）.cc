#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T,x,y,z;
    cin >> T;
    while(T--){
        cin >> x >> y >> z;
        int cnt = 0;
        for(int i = 1; i <= x; i++){
            for(int j = 1; j <= y; j++){
                for(int k = 1; k <=z; k++){
                    if(i%j==j%k&&j%k==k%i)cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}