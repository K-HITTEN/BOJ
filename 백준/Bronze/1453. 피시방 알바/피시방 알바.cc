#include<iostream>

using namespace std;

int N, ret, tmp;
bool visited[101];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> tmp;
        if(visited[tmp])ret++;
        else visited[tmp] = true;
    }
    cout << ret;
}