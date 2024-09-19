#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<int> plus,minus;
    int N, M, tmp, mk, pk, ret = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp<0)minus.push_back(-1*tmp);
        else plus.push_back(tmp);
    }
    sort(plus.begin(),plus.end(),greater<int>());
    sort(minus.begin(),minus.end(),greater<int>());
    if(minus.size() == 0){
        pk = 1;
        mk = 2;
    }
    else if(plus.size() == 0){
        mk = 1;
        pk = 2;
    }
    else if(minus[0]>plus[0]){
        mk = 1;
        pk = 2;
    }else{
        pk = 1;
        mk = 2;
    }
    int k;
    for(k = 0; k < minus.size(); k+=M){
        if(k == 0)ret+=mk*minus[k];
        else ret+= 2*minus[k];
    }
    for(k = 0; k < plus.size(); k+=M){
        if(k == 0)ret+=pk*plus[k];
        else ret+= 2*plus[k];
    }
    cout << ret;
}