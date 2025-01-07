#include<iostream>
#include<vector>

using namespace std;

int N, ret = -1;
vector<int> v;
bool FLAG;

void calc(int one, int two, int diff, int cnt){
    vector<int> tmp;
    tmp.resize(N);
    tmp[0]=one;
    tmp[1]=two;
    for(int i = 2; i < N; i++){
        // cout << one << " " << two << " " << diff << " " << i << " " << v[i] << " " << tmp[i-1]<< endl;
        if(!(v[i]==tmp[i-1]+diff||v[i]+1==tmp[i-1]+diff||v[i]-1==tmp[i-1]+diff))return;
        if(v[i]+1==tmp[i-1]+diff||v[i]-1==tmp[i-1]+diff)cnt++;
        tmp[i] = tmp[i-1]+diff;
    }
    if(ret == -1)ret = cnt;
    else ret = min(ret,cnt);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin>>v[i];
    calc(v[0],v[1],v[1]-v[0], 0);
    calc(v[0]+1,v[1],v[1]-v[0]-1,1);
    calc(v[0]-1,v[1],v[1]-v[0]+1,1);
    calc(v[0],v[1]+1,v[1]-v[0]+1,1);
    calc(v[0],v[1]-1,v[1]-v[0]-1,1);
    calc(v[0]+1,v[1]+1,v[1]-v[0],2);
    calc(v[0]+1,v[1]-1,v[1]-v[0]-2,2);
    calc(v[0]-1,v[1]+1,v[1]-v[0]+2,2);
    calc(v[0]-1,v[1]-1,v[1]-v[0],2);
    cout<< ret;
}