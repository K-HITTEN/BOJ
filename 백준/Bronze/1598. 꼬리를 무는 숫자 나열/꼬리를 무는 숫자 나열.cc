#include<iostream>
#include<cmath>

using namespace std;

int x,y;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> x >> y;
    cout << abs((x-1)/4-(y-1)/4)+abs((x-1)%4-(y-1)%4);
}