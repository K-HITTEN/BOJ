#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int a, b, tmp1, tmp2;
    cin >> a >> b;
    tmp1 = a+b;
    tmp2 = a-b;
    if(tmp1<tmp2||tmp1<0||tmp2<0){
        cout << -1;
    }
    else if(tmp1%2==0&&tmp2%2==0){
        cout << tmp1/2 << " " << tmp2/2;
    }else cout << -1;
}