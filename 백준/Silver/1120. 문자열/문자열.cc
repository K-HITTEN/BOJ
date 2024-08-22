#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    fastio;
    string a,b;
    int ans = 51, cnt;
    cin >> a >> b;
    for(int i = 0; i <= b.size() - a.size(); i++){
        cnt = 0;
        for(int j = 0; j < a.size(); j++){
            if(a[j] != b[j+i]) cnt++;
        }
        ans = min(ans,cnt);
    }
    cout << ans;
}