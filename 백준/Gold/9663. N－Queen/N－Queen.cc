#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, count = 0;
bool map[15][15] = {false,};

bool checking(int idx, int i){
    int y = idx, check1 = i, check2 = i;
    while(y >= 0){
        if(map[y][i])return false;
        if(check1>=0 && map[y][check1])return false;
        if(check2<N && map[y][check2])return false;
        y--;
        check1--;
        check2++;
    }
    return true;
}

void search(int idx){
    if(idx == N){
        count++;
        return;
    }
    for(int i = 0; i < N; i++){
        if(checking(idx,i)){
            map[idx][i] = true;
            search(idx+1);
            map[idx][i] = false;
        }
    }
}

int main(void){
    fastio;
    cin >> N;
    search(0);
    cout << count;
}