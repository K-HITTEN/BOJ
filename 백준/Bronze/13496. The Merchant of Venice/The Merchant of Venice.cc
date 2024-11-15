#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, n, s, d, sum, v, m;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> n >> s >> d;
        sum = 0;
        while(n--){
            cin >> m >> v;
            if(m/s<d||(m/s==d&&m%s==0))sum+=v;
        }
        cout << "Data Set " << t << ":\n" <<sum<<"\n\n";
    }
}