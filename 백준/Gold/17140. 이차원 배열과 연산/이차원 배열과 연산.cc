#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct info{
    int n, cnt;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.cnt == b.cnt)return a.n < b.n;
        else return a.cnt < b.cnt;
    }
};

int A[100][100], r, c, k, rc = 3, cc = 3, t = 0;
vector<info> v;
vector<int> tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> r >> c >> k;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    while(t<=100&&A[r-1][c-1]!=k){
        t++;
        if(rc<cc){
            for(int i = 0; i < cc; i++){
                v.clear();
                for(int j = 0; j < 100; j++){
                    bool FLAG = false;
                    if(!A[j][i])continue;
                    for(int k = 0; k < v.size(); k++){
                        if(v[k].n==A[j][i]){
                            v[k].cnt++;
                            FLAG = true;
                            break;
                        }
                    }
                    if(!FLAG)v.push_back({A[j][i], 1});
                    A[j][i] = 0;
                }
                sort(v.begin(),v.end(),cmp());
                tmp.clear();
                for(int j = 0; j < v.size(); j++){
                    tmp.push_back(v[j].n);
                    tmp.push_back(v[j].cnt);
                }
                rc = min(100,max(rc,(int)tmp.size()));
                for(int j = 0; j < min(100,(int)tmp.size()); j++){
                    A[j][i] = tmp[j];
                }
            }
        }else{
            for(int i = 0; i < rc; i++){
                v.clear();
                for(int j = 0; j < 100; j++){
                    bool FLAG = false;
                    if(!A[i][j])continue;
                    for(int k = 0; k < v.size(); k++){
                        if(v[k].n==A[i][j]){
                            v[k].cnt++;
                            FLAG = true;
                            break;
                        }
                    }
                    if(!FLAG)v.push_back({A[i][j], 1});
                    A[i][j] = 0;
                }
                sort(v.begin(),v.end(),cmp());
                tmp.clear();
                for(int j = 0; j < v.size(); j++){
                    tmp.push_back(v[j].n);
                    tmp.push_back(v[j].cnt);
                }
                cc = min(100,max(cc,(int)tmp.size()));
                for(int j = 0; j < min(100,(int)tmp.size()); j++){
                    A[i][j] = tmp[j];
                }
            }
        }
    }
    if(A[r-1][c-1]!=k)cout << -1;
    else cout << t;
}