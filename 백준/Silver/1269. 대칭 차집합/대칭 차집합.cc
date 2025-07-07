#include<iostream>
#include<set>

using namespace std;

set<int> m;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int A, B, tmp, cnt = 0;
    cin >> A >> B;
    while(A--){
        cin >> tmp;
        if(m.find(tmp)==m.end()){
            m.insert(tmp);
            cnt++;
        }
    }
    while(B--){
        cin >>tmp;
        if(m.find(tmp)==m.end()){
            m.insert(tmp);
            cnt++;
        }else cnt--;
    }
    cout << cnt;
}