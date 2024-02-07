#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int px1,px2,px3,py1,py2,py3;
    cin >> px1 >> py1 >> px2 >> py2 >> px3 >> py3;
    int result = (px1*py2+px2*py3+px3*py1)-(px2*py1+px3*py2+px1*py3);
    if(result>0)cout <<1;
    else if(result <0) cout << -1;
    else cout <<0;
}
