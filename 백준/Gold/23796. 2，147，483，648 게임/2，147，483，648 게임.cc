#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long map[8][8];
char c;

int main(void){
    for(int i = 0; i < 8; i++)for(int j = 0; j < 8; j++)cin >> map[i][j];
    cin >> c;
    queue<long long> q;
    switch(c){
        case 'U':
            for(int i = 0; i < 8; i++){
                for(int j = 0; j < 8; j++){
                    if(map[j][i] != 0){
                        q.push(map[j][i]);
                        map[j][i] = 0;
                    }
                }
                if(q.empty())continue;
                for(int j = 0; j <8; j++){
                    map[j][i] = q.front();
                    q.pop();
                    if(!q.empty()&&map[j][i] == q.front()){
                        map[j][i] *=2;
                        q.pop();
                    }
                    if(q.empty())break;
                }
            }
            break;
        case 'D':
            for(int i = 0; i < 8; i++){
                for(int j = 7; j >= 0; j--){
                    if(map[j][i] != 0){
                        q.push(map[j][i]);
                        map[j][i] = 0;
                    }
                }
                if(q.empty())continue;
                for(int j = 7; j >=0; j--){
                    map[j][i] = q.front();
                    q.pop();
                    if(!q.empty()&&map[j][i] == q.front()){
                        map[j][i] *=2;
                        q.pop();
                    }
                    if(q.empty())break;
                }
            }
            break;
        case 'L':
            for(int i = 0; i < 8; i++){
                for(int j = 0; j < 8; j++){
                    if(map[i][j] != 0){
                        q.push(map[i][j]);
                        map[i][j] = 0;
                    }
                }
                if(q.empty())continue;
                for(int j = 0; j <8; j++){
                    map[i][j] = q.front();
                    q.pop();
                    if(!q.empty()&&map[i][j] == q.front()){
                        map[i][j] *=2;
                        q.pop();
                    }
                    if(q.empty())break;
                }
            }
            break;
        case 'R':
            for(int i = 0; i < 8; i++){
                for(int j = 7; j >= 0; j--){
                    if(map[i][j] != 0){
                        q.push(map[i][j]);
                        map[i][j] = 0;
                    }
                }
                if(q.empty())continue;
                for(int j = 7; j >=0; j--){
                    map[i][j] = q.front();
                    q.pop();
                    if(!q.empty()&&map[i][j] == q.front()){
                        map[i][j] *=2;
                        q.pop();
                    }
                    if(q.empty())break;
                }
            }
    }
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cout << map[i][j] << " ";
        }
        cout << "\n";
    }
}