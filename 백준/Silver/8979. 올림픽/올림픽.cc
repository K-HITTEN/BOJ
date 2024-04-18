#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
  int idx, gold, silver, bronze;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.gold==b.gold){
            if(a.silver==b.silver){
                return a.bronze>b.bronze;
            }else return a.silver>b.silver;
        }else return a.gold>b.gold;
    }
};

int main(void){
    fastio;
    int N, K, tmp1, tmp2, tmp3, tmp4;
    vector<info> v;
    v.push_back({1001,1000001,1000001,1000001});
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> tmp1 >> tmp2 >> tmp3 >> tmp4;
        v.push_back({tmp1,tmp2,tmp3,tmp4});
    }
    sort(v.begin(),v.end(),cmp());
    int i,j;
    for(i = 0; i <= N; i++){
        if(v[i].idx == K)break;
    }
    j = i-1;
    for(; j>=0; j--){
        if(v[j].gold == v[i].gold && v[j].silver == v[i].silver && v[j].bronze == v[i].bronze){
            i--;
        }else break;
    }
    cout << i;
}