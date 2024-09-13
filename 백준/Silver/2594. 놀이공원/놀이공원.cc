#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int calc(string s){
    return ((((int)(s[0]-'0')*10)+((int)(s[1]-'0')))*60+(((int)(s[2]-'0')*10)+((int)(s[3]-'0'))));
}

int main(void){
    fastio;
    int N, ret = 0;
    string s1, s2;
    vector<pair<int,int>> v;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s1 >> s2;
        v.push_back({calc(s1)-10,calc(s2)+10});
    }
    sort(v.begin(),v.end());
    ret = v[0].first - 600;
    int last = v[0].second;
    for(int i = 1; i < N; i++){
        ret = max(ret,v[i].first-last);
        last = max(last, v[i].second);
    }
    ret = max(ret,1320-last);
    cout << ret;
}