#include<iostream>
#include<cmath>

using namespace std;

int N, tgt[5] = {1,3,5,7,9};

bool calc(int n){
    if(n == 2)return true;
    for(int i = 2; i <= sqrt(n); i++)if(!(n%i))return false;
    return true;
}

void backtracking(int idx, int n){
    if(n == 1){
        cout << idx << "\n";
        return;
    }
    for(int i = 0; i < 5; i++)if(calc(idx*10+tgt[i]))backtracking(idx*10+tgt[i],n-1);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    backtracking(2,N);
    backtracking(3,N);
    backtracking(5,N);
    backtracking(7,N);
}