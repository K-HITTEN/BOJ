#include <iostream>
#include <stack>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int K, tmp, sum = 0;
    cin >> K;
    stack <int> s;
    for(int i = 0; i <K; i++){
        cin >> tmp;
        if(!s.empty() && tmp == 0)s.pop();
        else s.push(tmp);
    }
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    cout <<sum;
}