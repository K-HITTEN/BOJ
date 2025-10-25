#include<iostream>
#include<vector>

using namespace std;

struct info{
    int a, b;
};

int N, tmp;
vector<info> v, ans;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    ans.resize(N);
    for(int i = 1; i <= N; i++){
        cin >> tmp;
        info temp;
        temp.a = i;
        temp.b = tmp;
        v.push_back(temp);
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(v[j].b == -1)continue;
            if(v[j].b == 0){
                ans[i] = v[j];
                v[j].b = -1;
                break;
            }else v[j].b--;
        }
    }
    for(int i = 0; i < N; i++)cout << ans[i].a << ' ';
}