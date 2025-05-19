#include<iostream>

using namespace std;

void hanoi(int n, int s, int e, int p){
    if(n == 1)cout << s << " " << e << "\n";
    else {
        hanoi(n-1,s,p,e);
        cout << s << " " << e << "\n";
        hanoi(n-1,p,e,s);
    }
}


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    cin >> N;
    cout << (1<<N)-1 << "\n";
    hanoi(N,1,3,2);
}