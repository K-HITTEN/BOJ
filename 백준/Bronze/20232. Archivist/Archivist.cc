#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int y;
    cin >> y;
    if(y == 1995 || (1998<=y&&y<=1999) || (2001<=y&&y<=2005) || (2009<=y&&y<=2012) || (2014<=y&&y<=2017) || y == 2019) cout << "ITMO";
    else if((1996<=y&&y<=1997) || y == 2000 || (2007<=y&&y<=2008) || y == 2013 || y == 2018) cout << "SPbSU";
    else cout << "PetrSU, ITMO";
}