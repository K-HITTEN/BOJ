#include <iostream>
#include <string>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[10000], prime[10000];

int main(void){
    fastio;
    int N;
    string tmp, tgt;
    for(int i = 2; i < 10000; i++){
        if(prime[i])continue;
        for(int j = i+i; j <10000; j+=i){
            prime[j] = true;
        }
    }
    cin >> N;
    for(int i = 0; i < N; i++){
        int count = 0;
        cin >> tmp >> tgt;
        fill(visited,visited+10000,false);
        queue<pair<int,string>> q;
        q.push({0,tmp});
        bool FLAG = false;
        visited[stoi(tmp)] = true;
        while(!q.empty()){
            pair<int,string> temp = q.front();
            q.pop();
            if(temp.second == tgt){
                FLAG = true;
                cout << temp.first << "\n";
                break;
            }
            for(int i = 0; i < 4; i++){
                for(int j = 0; j < 10; j++){
                    string num = temp.second;
                    num[i] = j +'0';
                    int n = stoi(num);
                    if(prime[n]||visited[n]||num[0] == '0')continue;
                    visited[n] = true;
                    q.push({temp.first+1,num});
                }
            }
        }
        if(!FLAG)cout << "Impossible\n";
    }
}
