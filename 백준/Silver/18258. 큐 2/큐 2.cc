#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, n;
    string s;
    cin >> N;
    queue<int> q;
    while(N--){
        cin >> s;
        if(s == "push"){
            cin >> n;
            q.push(n);
        }
        else if(s == "pop"){
            if(q.empty())cout<< -1<< '\n';
            else{
                cout << q.front()<< '\n';
                q.pop();
            }
        }
        else if(s == "size")cout << q.size()<< '\n';
        else if(s == "empty"){
            if(q.empty())cout << 1<< '\n';
            else cout << 0<< '\n';
        }
        else if(s == "front"){
            if(q.empty())cout << -1<< '\n';
            else cout << q.front()<< '\n';
        }
        else if(s == "back"){
            if(q.empty())cout << -1<< '\n';
            else cout << n << '\n';
        }
    }
}