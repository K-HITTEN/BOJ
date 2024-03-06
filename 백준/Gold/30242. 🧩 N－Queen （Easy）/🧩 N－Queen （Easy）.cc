#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N;
int result[21] = {0,};
bool cols[21] = {false,};
bool straight[21] = {false,};
bool left_cross[45] = {false,};
bool right_cross[45] = {false,};

bool search(int idx){
    if(idx == N+1){
        for(int i = 1; i <= N; i++){
            cout << result[i] << " ";
        }
        return true;
    }
    if(cols[idx])return search(idx+1);
    for(int i = 1; i <= N; i++){
        if(!straight[i] && !left_cross[idx-i+21] && !right_cross[i+idx]){
            result[idx] = i;
            straight[i] = true;
            left_cross[idx-i+21] = true;
            right_cross[i+idx] = true;
            if(search(idx+1)){
                return true;   
            }
            result[idx] = 0;
            straight[i] = false;
            left_cross[idx-i+21] = false;
            right_cross[i+idx] = false;
        }
    }
    return false;
}

int main(void){
    fastio;
    int tmp;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> tmp;
        if(tmp == 0)continue;
        result[i] = tmp;
        cols[i] = true;
        straight[tmp] = true;
        left_cross[i-tmp+21] = true;
        right_cross[i+tmp] = true;
    }
    if(!search(1))cout << -1;
}