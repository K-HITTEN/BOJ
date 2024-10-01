#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int h1, m1, s1, h2, m2, s2;
    for(int i = 0; i < 3; i++){
        cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
        s1 += (h1*3600+m1*60);
        s2 += (h2*3600+m2*60);
        s2 -= s1;
        cout << s2/3600 << " " << (s2%3600)/60 << " " << s2%60 << "\n";
    }
}