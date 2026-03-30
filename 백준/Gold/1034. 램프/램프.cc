#include<iostream>
#include<vector>
#include<map>

using namespace std;

int N, M, K, ret;
string s[51];
vector<string> v;
map<string,int> m;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++)cin >> s[i];
    cin >> K;
    for(int i = 0; i < N; i++){
        if(m.find(s[i]) != m.end()){
            m[s[i]]++;
        }else{
            m.insert({s[i],1});
            int zero = 0;
            for(int j = 0; j < M; j++){
                if(s[i][j]=='0')zero++;
            }
            if((zero<=K)&&(zero%2 == K%2))v.push_back(s[i]);
        }
    }
    for(int i = 0; i < v.size(); i++){
        ret = max(ret,m[v[i]]);
    }
    cout << ret;
}