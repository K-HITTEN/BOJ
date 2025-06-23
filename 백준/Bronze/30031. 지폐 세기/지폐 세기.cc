#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, sum = 0, a, b;
    cin >> N;
    while(N--){
        cin >> a >> b;
        if(a==136)sum+=1000;
        else if(a==142)sum+=5000;
        else if(a==148)sum+=10000;
        else sum+=50000;
    }
    cout << sum;
}