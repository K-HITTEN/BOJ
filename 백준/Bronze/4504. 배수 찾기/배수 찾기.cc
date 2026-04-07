#include<iostream>

using namespace std;

int N, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(true){
        cin >> tmp;
        if(!tmp)break;
        cout << tmp << " is ";
        if(tmp%N)cout << "NOT ";
        cout << "a multiple of " << N << ".\n";
    }
}