#include<iostream>

using namespace std;

int h,m;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> h >> m;
    m += (h*60);
    if ((390 <= m && m <= 540) || (590 <= m && m <= 600) || (650 <= m && m <= 660) || (710 <= m && m <= 720) || (770 <= m && m <= 830) || (880 <= m && m <= 890) || (940 <= m && m <= 950) || (1000 <= m && m <= 1370))cout << "Yes";
    else cout << "No";
}