#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int gcd(int a, int b){ // 최대공약수
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int lcm(int a, int b){ // 최소공배수
    return a * b / gcd(a, b);
}

int main(void){
    fastio;
    int T, M, N, x, y;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> M >> N >> x >> y;
        int max_date = lcm(M,N);
        int ans = -1;
        for(int i = x; i <= max_date; i+=M){
            int res = i % N;
            if(res == 0)res = N;
            if(res == y){
                ans = i;
                break;
            }
        }
        cout << ans <<"\n";
    }
}