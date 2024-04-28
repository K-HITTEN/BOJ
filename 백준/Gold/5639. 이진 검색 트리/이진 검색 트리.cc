#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;

void search(int s, int e){
    if(s >= e)return;
    if(s == e-1){
        cout<<v[s]<<"\n";
        return;
    }
    int tmp = s+1;
    while(tmp<e){
        if(v[tmp]>v[s])break;
        tmp++;
    }
    search(s+1,tmp);
    search(tmp,e);
    cout<<v[s]<<"\n"; 
}

int main(void){
    fastio;
    int tmp;
    while(cin >> tmp)v.push_back(tmp);
    search(0, v.size());
}