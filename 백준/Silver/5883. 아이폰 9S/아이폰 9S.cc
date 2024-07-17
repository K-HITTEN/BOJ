#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
bool visited[1000001];
int max_val = 1;

int main(void){
    fastio;
    int N;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    for(int i = 0; i < N; i++){
        if(visited[v[i]])continue;
        visited[v[i]] = true;
        int tmp = v[0] ,tmpcount = 1;
        for(int j = 1; j < N; j++){
            if(v[i] == v[j])continue;
            if(tmp != v[j]){
                tmp = v[j];
                tmpcount = 1;
            }else tmpcount++;
            max_val = max(max_val,tmpcount);
        }
    }
    cout << max_val;
}