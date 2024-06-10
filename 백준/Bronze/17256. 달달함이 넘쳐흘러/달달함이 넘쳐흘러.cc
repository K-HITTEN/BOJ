#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int ax,ay,az,cx,cy,cz;
    cin >> ax >> ay >> az >> cx >> cy >> cz;
    cout << cx-az << " " << cy/ay << " " << cz-ax;
}