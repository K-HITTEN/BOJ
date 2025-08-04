#include<iostream>

using namespace std;

int main(){
    int n, a = 0, b = 0, tmp;
    cin >> n;
    while(n--){
        cin >> tmp;
        if(tmp)a++;
        else b++;
    }
    if(a>b)cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";
}
    