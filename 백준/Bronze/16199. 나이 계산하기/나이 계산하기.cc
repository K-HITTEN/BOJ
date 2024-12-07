#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int Y,M,D,y,m,d,age;
    cin >> Y >> M >> D >> y >> m >> d;
    if(M<m||(M==m&&D<=d))age = y-Y;
    else age = y-Y-1;
    cout << age << '\n' << y-Y+1 << '\n' << y-Y;
}