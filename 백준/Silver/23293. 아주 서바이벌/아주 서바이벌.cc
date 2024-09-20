#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int position[100001],item[100001][54], T, N, n, p, a, a2, ret = 0;
char c;
bool visited[100001];
vector<int> v, v2;

int main(void){
    fastio;
    cin >> T >> N;
    fill(position,position+100001, 1);
    for(int t = 0; t < T; t++){
        cin >> n >> p >> c >> a;
        if(c == 'M')position[p] = a;
        else if(c == 'F'){
            item[p][a]++;
            if(position[p] != a)v.push_back(n);
        }else if(c == 'C'){
            cin >> a2;
            if(item[p][a]>0&&item[p][a2]>0){
                item[p][a]--;
                item[p][a2]--;
            }else{
                if(item[p][a]>0)item[p][a]--;
                if(item[p][a2]>0)item[p][a2]--;
                v.push_back(n);
            }
        }else{
            if(position[p] != position[a]){
                v.push_back(n);
                if(!visited[p]){
                    visited[p] = true;
                    v2.push_back(p);
                }
            }
        }
    }
    sort(v.begin(),v.end());
    sort(v2.begin(),v2.end());
    cout << v.size() << '\n';
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    if(v.size()>0)cout << "\n";
    cout << v2.size() << "\n";
    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
}