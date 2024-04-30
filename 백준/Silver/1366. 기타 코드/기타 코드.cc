#include <iostream>
#include <cmath>
#include <map>
#include <set>
#include <algorithm>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, M, answer = 987654321;
map<string,int> m;
vector<string> src,tgt;
int check[6];
vector<pair<int,int>> v;

void perm(int srcIdx){
    if(srcIdx == N){
        set<int> s;
        int min_val = 987654321, max_val = 0; 
        for(int i = 0; i < N; i++){
            s.insert(v[i].first);
            if(v[i].second != 0){
                min_val = min(min_val,v[i].second);
                max_val = max(max_val,v[i].second);
            }
        }
        if(s.size() < M)return;
        if(max_val == 0)answer = 0;
        else if(max_val-min_val+1<answer){
            answer = max_val-min_val+1;
        }
        return;
    }
    for(int i = 0; i < M; i++){
        v[srcIdx].first = m[tgt[i]];
        v[srcIdx].second = m[tgt[i]]-m[src[srcIdx]];
        if(v[srcIdx].second<0)v[srcIdx].second+=12;
        perm(srcIdx+1);
        v[srcIdx].second+=12;
        perm(srcIdx+1);
    }
}

int main(void){
    fastio;
    m.insert({"A",1});
    m.insert({"A#",2});
    m.insert({"B",3});
    m.insert({"C",4});
    m.insert({"C#",5});
    m.insert({"D",6});
    m.insert({"D#",7});
    m.insert({"E",8});
    m.insert({"F",9});
    m.insert({"F#",10});
    m.insert({"G",11});
    m.insert({"G#",12});
    cin >> N >> M;
    src.resize(N);
    v.resize(N);
    tgt.resize(M);
    for(int i = 0; i < N; i++)cin>>src[i];
    for(int i = 0; i < M; i++)cin>>tgt[i];
    perm(0);
    if(answer == 987654321) cout << 0;
    else cout << answer;
}