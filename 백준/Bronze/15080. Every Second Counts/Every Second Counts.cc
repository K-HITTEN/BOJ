#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int a,b,c,d,e,f, ret;
    char t;
    cin >> a >> t >> b >> t >> c >> d >> t >> e >> t >> f;
    ret = d*3600+e*60+f-a*3600-b*60-c;
    if(ret < 0)ret+=86400;
    cout << ret;
}