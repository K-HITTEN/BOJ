#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    cout << fixed;
    cout.precision(2);
    int n; 
    double d,f,p;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> d >> f >> p;
        cout << "$" << d*f*p << "\n";
    }
}