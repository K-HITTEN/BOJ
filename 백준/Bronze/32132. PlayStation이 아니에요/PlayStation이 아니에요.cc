#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    cin >> N;
    string s = "";
    char c1, c2, c3;
    if(N <= 2){
        cin >> s;
        cout << s;
        return 0;
    }
    cin >> c1 >> c2;
    for(int i = 2; i < N; i++){
        cin >> c3;
        if(c1 == 'P'&&c2 == 'S'&&(c3=='4'||c3=='5'))continue;
        s += c1;
        c1 = c2;
        c2  = c3;
    }
    s+= c1;
    s+= c2;
    cout << s;
}