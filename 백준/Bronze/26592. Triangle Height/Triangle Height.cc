#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    double a,b;
    int T;
    cout << fixed;
    cout.precision(2);
    cin >> T;
    while(T--){
        cin >> a >> b;
        cout << "The height of the triangle is "<< a*2/b << " units\n";
    }
}