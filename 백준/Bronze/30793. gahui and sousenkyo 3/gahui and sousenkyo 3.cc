#include<iostream>

using namespace std;

double px, rx;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> px >> rx;
    if(px/rx<0.2)cout << "weak";
    else if(px/rx<0.4)cout << "normal";
    else if(px/rx<0.6)cout << "strong";
    else cout << "very strong";
}