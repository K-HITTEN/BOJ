#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    long long ret, N;
    cin >> N;
    if(N<10)ret = N;
    else if(N<100)ret = 2*(N-9)+9;
    else if(N<1000)ret = 3*(N-99)+189;
    else if(N<10000)ret = 4*(N-999)+2889;
    else if(N<100000)ret = 5*(N-9999)+38889;
    else if(N<1000000)ret = 6*(N-99999)+488889;
    else if(N<10000000)ret = 7*(N-999999)+5888889;
    else if(N<100000000)ret = 8*(N-9999999)+68888889;
    else if(N<1000000000)ret = 9*(N-99999999)+788888889;
    cout << ret;
}