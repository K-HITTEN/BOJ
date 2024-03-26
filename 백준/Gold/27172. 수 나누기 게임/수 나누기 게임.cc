#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, result[1000001] = {0,}, max_value = 0;
    bool visited[1000001] = {false,};
    vector<int> v;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
        visited[v[i]] = true;
        if(v[i]>max_value)max_value = v[i];
    }
    for(int i = 0; i < N; i++){
        for(int j = v[i]*2; j<=max_value; j+=v[i]){
            if(visited[j]){
                result[j]--;
                result[v[i]]++;
            }
        }
    }
    for(int i = 0; i < N; i++)cout << result[v[i]] <<" ";
}