#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct info{
    int price;
    string name;
};

struct cmp{
    bool operator()(info &a, info &b){
        return a.price > b.price;
    }
};

int n, p;
vector<info> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> n;
    while(n--){
        cin >> p;
        v.clear();
        v.resize(p);
        for(int i = 0; i < p; i++){
            cin >> v[i].price >> v[i].name;
        }
        sort(v.begin(),v.end(),cmp());
        cout << v[0].name << '\n';
    }
}