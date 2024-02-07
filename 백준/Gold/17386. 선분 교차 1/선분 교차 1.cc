#include <iostream>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long ccw(long long px1, long long py1, long long px2, long long py2, long long px3, long long py3){
    long long result = (px1*py2+px2*py3+px3*py1)-(px2*py1+px3*py2+px1*py3);
    if(result < 0) return -1;
    else if(result >0) return 1;
    else return 0;
}

int main(void){
    fastio;
    long long px1,px2,px3,px4,py1,py2,py3,py4;
    cin >> px1 >> py1 >> px2 >> py2 >> px3 >> py3 >> px4 >> py4;
    long long i = ccw(px1,py1,px2,py2,px3,py3)*ccw(px1,py1,px2,py2,px4,py4);
    long long j = ccw(px3,py3,px4,py4,px1,py1)*ccw(px3,py3,px4,py4,px2,py2);
    if(i== -1 && j == -1)cout << 1;
    else cout << 0;
}
