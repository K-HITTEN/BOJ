#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

bool visited[10000];

int main(void){
    fastio;
    int T, s1, s2;
    cin >> T;
    for(int t = 0; t < T; t++){
        cin >> s1 >> s2;
        queue<pair<int,string>> q;
        q.push({s1,""});
        fill(visited,visited+10000,false);
        visited[s1] = true;
        while(!q.empty()){
            pair<int,string> tmp = q.front();
            q.pop();
            int temp = (tmp.first*2)%10000;
            if(temp == s2){
                cout << tmp.second+"D\n";
                break;
            }
            if(!visited[temp]){
                visited[temp] = true;
                q.push({temp,tmp.second+"D"});
            }
            temp = tmp.first-1;
            if(temp  == -1)temp = 9999;
            if(temp == s2){
                cout << tmp.second+"S\n";
                break;
            }
            if(!visited[temp]){
                visited[temp] = true;
                q.push({temp,tmp.second+"S"});
            }
            temp = (tmp.first%1000)*10 + (tmp.first/1000);
            if(temp == s2){
                cout << tmp.second+"L\n";
                break;
            }
            if(!visited[temp]){
                visited[temp] = true;
                q.push({temp,tmp.second+"L"});
            }
            temp = (tmp.first/10) + ((tmp.first%10)*1000);
            if(temp == s2){
                cout << tmp.second+"R\n";
                break;
            }
            if(!visited[temp]){
                visited[temp] = true;
                q.push({temp,tmp.second+"R"});
            }
        }
    }
}

