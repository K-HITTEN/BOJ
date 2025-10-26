#include<iostream>
#include<deque>

using namespace std;

int N, a, b;
deque<int> dq;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> a;
        switch(a){
            case 1:
                cin >> b;
                dq.push_front(b);
                break;
            case 2: 
                cin >> b;
                dq.push_back(b);
                break;
            case 3:
                if(!dq.empty()){
                    cout << dq.front();
                    dq.pop_front();
                }else cout << -1;
                break;
            case 4:
                if(!dq.empty()){
                    cout << dq.back();
                    dq.pop_back();
                }else cout << -1;
                break;
            case 5:
                cout << dq.size();
                break;
            case 6:
                if(dq.empty())cout << 1;
                else cout << 0;
                break;
            case 7:
                if(!dq.empty())cout << dq.front();
                else cout << -1;
                break;
            case 8:
                if(!dq.empty())cout << dq.back();
                else cout << -1;
                break;
        }
        if(!(a==1||a==2))cout << '\n';
    }
}