#include<iostream>
#include<vector>

using namespace std;

vector<int> v;
int N,tgt[6];

void comb(int idx, int tgtIdx){
    if(tgtIdx == 6){
        for(int i = 0; i < 6; i++)cout << tgt[i] << " ";
        cout << "\n";
        return;
    }
    if(idx==N)return;
    tgt[tgtIdx] = v[idx];
    comb(idx+1, tgtIdx+1);
    comb(idx+1, tgtIdx);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    while(true){
        cin >> N;
        if(!N)break;
        v.resize(N);
        for(int i = 0; i < N; i++)cin >> v[i];
        comb(0,0);
        cout << "\n";
    }
}