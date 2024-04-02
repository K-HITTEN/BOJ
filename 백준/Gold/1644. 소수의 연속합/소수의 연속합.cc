#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[4000001];
vector <int> v;

int main(void){
    fastio;
    int N, result = 0;
    cin >> N;
    if(N == 1){
        cout << 0; 
        return 0;
    }
    if(N == 2){
        cout << 1;
        return 0;
    }
    for(int i = 2; i<=N; i++){
        if(visited[i])continue;
        v.push_back(i);
        for(int j = i+i; j<=N; j+=i){
            visited[j] = true;
        }
    }
    int left = 0, right = 1, sum = v[0]+v[1];
    while(left<=right&&right<v.size()){
        if(sum == N){
            result++;
            sum -=v[left];
            left++;
        }
        else if(sum < N){
            right++;
            sum+=v[right];
        }
        else {
            sum-=v[left];
            left++;
        }
    }
    cout << result;
}