#include<iostream>
#include<vector>

using namespace std;

int A,B,C = -1;
bool visited[11];
vector<int> v;

void perm(int idx, int sum){
    if(idx == v.size()){
        if(sum>=B)return;
        C = max(C,sum);
        return;
    }
    for(int i = 0; i < v.size(); i++){
        if(visited[i]||(idx==0&&v[i]==0))continue;
        visited[i] = true;
        perm(idx+1,sum*10+v[i]);
        visited[i] = false;
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> A >> B;
    while(A!=0){
        v.push_back(A%10);
        A/=10;
    }
    perm(0,0);
    cout << C;
}