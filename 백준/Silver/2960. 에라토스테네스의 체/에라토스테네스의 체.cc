#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[1001] = {false,};

int main(void){
    fastio;
    int N,K, count = 0;
    cin >> N >> K;
    for(int i = 2; i <= N; i++){
        if(visited[i])continue;
        for(int j = i; j <= N; j+=i){
            if(!visited[j]){
                visited[j] = true;
                count++;
                if(count == K){
                    cout << j;
                    return 0;
                }
            }
        }
    }
}