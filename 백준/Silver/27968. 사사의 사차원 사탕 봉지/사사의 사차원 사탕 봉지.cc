#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M;
    cin >> N >> M;
    long long tmp;
    vector<long long> v;
    for(int i = 0; i < M; i++){
        cin >> tmp;
        if(i!=0)tmp+=v[i-1];
        v.push_back(tmp);
    }
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(v[v.size()-1]<tmp)cout<< "Go away!\n";
        else{
            int l = 0, r = v.size()-1;
            cout << lower_bound(v.begin(),v.end(),tmp)-v.begin()+1 <<"\n";
        }
    }
}