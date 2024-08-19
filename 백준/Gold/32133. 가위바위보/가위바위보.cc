#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, K, rnd = 51;
vector<string> v;
bool isDead[51];
string ret;

void perm(int cnt, int num, string s){
    if(M<cnt||cnt>=rnd)return;
    for(int i = 0; i < 3; i++){
        vector<int> check;
        int cn = num;
        for(int j = 0; j < N; j++){
            if(!isDead[j]){
                if((i == 0 && v[j][cnt] != 'R')||(i == 1 && v[j][cnt] != 'P')||(i == 2 && v[j][cnt] != 'S')){
                    isDead[j] = true;
                    check.push_back(j);
                    cn--;
                }
            }
        }
        if(cn<=K && cn != 0){
            if(rnd > cnt+1){
                rnd = cnt+1;
                if(i == 0)ret = s+"S";
                else if(i == 1)ret = s+"R";
                else if(i == 2)ret = s+"P";
            }
        }
        else if(cn != 0) {
            if(i == 0)perm(cnt+1,cn,s+"S");
            else if(i == 1)perm(cnt+1,cn,s+"R");
            else if(i == 2)perm(cnt+1,cn,s+"P");
        }
        for(int k = 0; k < check.size(); k++)isDead[check[k]] = false;
    }
}


int main(void){
    fastio;
    cin >> N >> M >> K;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    perm(0, N, "");
    if(rnd == 51)cout << -1;
    else cout << rnd <<"\n" << ret;
}