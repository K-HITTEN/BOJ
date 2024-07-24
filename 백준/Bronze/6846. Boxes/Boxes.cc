#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    long long x,y,z;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.x*a.y*a.z < b.x*b.y*b.z;
    }
};

int main(void){
    fastio;
    int n;
    long long tmp1, tmp2, tmp3;
    cin >> n;
    vector<info> v;
    for(int i = 0; i < n; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        v.push_back({tmp1,tmp2,tmp3});
    }
    sort(v.begin(), v.end(), cmp());
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        bool FLAG = false;
        for(int j = 0; j < v.size(); j++){
            if((v[j].x>=tmp1&&v[j].y>=tmp2&&v[j].z>=tmp3)||(v[j].x>=tmp1&&v[j].y>=tmp3&&v[j].z>=tmp2)||(v[j].x>=tmp2&&v[j].y>=tmp1&&v[j].z>=tmp3)||(v[j].x>=tmp2&&v[j].y>=tmp3&&v[j].z>=tmp1)||(v[j].x>=tmp3&&v[j].y>=tmp1&&v[j].z>=tmp2)||(v[j].x>=tmp3&&v[j].y>=tmp2&&v[j].z>=tmp1)){
                FLAG = true;
                cout << v[j].x*v[j].y*v[j].z << "\n";
                break;
            }
        }
        if(!FLAG)cout << "Item does not fit.\n";
    }
}