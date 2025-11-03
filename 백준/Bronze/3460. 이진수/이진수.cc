#include<iostream>
#include<queue>

using namespace std;

queue<int> q;
int T, N, i;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> T;
    while(T--){
        cin >> N;
        while(N){
            if(N%2)q.push(1);
            else q.push(0);
            N/=2;
        }
        i = 0;
        while(!q.empty()){
            if(q.front())cout << i << ' ';
            q.pop();
            i++;
        }
        cout << '\n';
    }
}