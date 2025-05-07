#include<iostream>

using namespace std;

int N,P[49],p[49],s[49],tmp[49], cnt = 0;

bool check(){
    for(int i = 0; i < N; i++){
        if(p[i]!=(i%3))return false;
    }
    return true;
}

bool check2(){
    for(int i = 0; i < N; i++){
        if(p[i]!=P[i])return false;
    }
    return true;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> P[i];
        p[i] = P[i];
    }
    for(int i = 0; i < N; i++)cin >> s[i];
    while(true){
        if(check())break;
        if(cnt!=0&&check2()){
            cout << -1;
            return 0;
        }
        for(int i = 0; i < N; i++){
            tmp[s[i]] = p[i];
        }
        for(int i = 0; i < N; i++)p[i] = tmp[i];
        cnt++;
    }
    cout << cnt;
}