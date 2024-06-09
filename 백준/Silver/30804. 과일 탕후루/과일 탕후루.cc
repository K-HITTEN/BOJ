#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int counting[200000], N, max_val = 0, l = 0, r = 0, count = 0;
bool visited[200000];
vector<int> v;

int main(void){
    fastio;
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    while(true){
        if(count <=2){
            max_val = max(max_val,r-l);
            if(r==N)break;
            if(!visited[v[r]]){
                visited[v[r]] = true;
                count++;
            }
            counting[v[r]]++;
            r++;
        }else{
            counting[v[l]]--;
            if(counting[v[l]] == 0){
                visited[v[l]] = false;
                count--;
            }
            l++;
        }
    }
    cout << max_val;
}