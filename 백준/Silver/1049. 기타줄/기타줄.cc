#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, ret = 987654321, n = 1001, m = 1001, a, b;
    cin >> N >> M;
    while(M--){
        cin >> a >> b;
        n = min(n,a);
        m = min(m,b);
    }
    ret = min(ret,(N/6+1)*n);
    ret = min(ret, N/6*n+(N%6)*m);
    ret = min(ret,N*m);
    cout << ret;
}