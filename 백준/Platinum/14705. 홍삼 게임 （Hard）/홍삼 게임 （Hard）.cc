#include <iostream>
#include <queue>
#include <tuple>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N,A,B,Da,Db;
int turn = 987654321;
bool Avisited[500001][2], Bvisited[500001][2];

int main(void){
    fastio;
    cin >> N >> A >> B >> Da >> Db;
    queue<tuple<int,int,int>> q;
    Avisited[A][1] = true;
    Bvisited[B][1] = true;
    q.push({1,A,1});
    q.push({2,B,1});
    while(!q.empty()){
        tuple<int,int,int> tmp = q.front();
        q.pop();
        if((get<0>(tmp) == 1 && 2*get<2>(tmp)-1>=turn)||(get<0>(tmp) == 2 && 2*get<2>(tmp)>=turn)){
            cout << turn; 
            return 0;
        }
        if(get<0>(tmp) == 1){
            int position = get<1>(tmp) + Da;
            if(position > N) position -= N;
            if(Bvisited[position][get<2>(tmp)%2]){
                cout << 2*get<2>(tmp)-1;
                return 0;
            }
            if(Bvisited[position][(get<2>(tmp)+1)%2]){
                turn = min(turn,2*get<2>(tmp));
            }
            if(!Avisited[position][(get<2>(tmp)+1)%2]){
                Avisited[position][(get<2>(tmp)+1)%2] = true;
                q.push({1,position,get<2>(tmp)+1});
            }
            position = get<1>(tmp) - Da;
            if(position < 1) position = N + position;
            if(Bvisited[position][get<2>(tmp)%2]){
                cout << 2*get<2>(tmp)-1;
                return 0;
            }
            if(Bvisited[position][(get<2>(tmp)+1)%2]){
                turn = min(turn,2*get<2>(tmp));
            }
            if(!Avisited[position][(get<2>(tmp)+1)%2]){
                Avisited[position][(get<2>(tmp)+1)%2] = true;
                q.push({1,position,get<2>(tmp)+1});
            }
        }else{
            int position = get<1>(tmp) + Db;
            if(position > N) position -= N;
            if(Avisited[position][(get<2>(tmp)+1)%2]){
                cout << 2*get<2>(tmp);
                return 0;
            }
            if(Avisited[position][get<2>(tmp)%2]){
                turn = min(turn,2*get<2>(tmp)+1);
            }
            if(!Bvisited[position][(get<2>(tmp)+1)%2]){
                Bvisited[position][(get<2>(tmp)+1)%2] = true;
                q.push({2,position,get<2>(tmp)+1});
            }
            position = get<1>(tmp) - Db;
            if(position < 1) position = N + position;
            if(Avisited[position][(get<2>(tmp)+1)%2]){
                cout << 2*get<2>(tmp);
                return 0;
            }
            if(Avisited[position][get<2>(tmp)%2]){
                turn = min(turn,2*get<2>(tmp)+1);
            }
            if(!Bvisited[position][(get<2>(tmp)+1)%2]){
                Bvisited[position][(get<2>(tmp)+1)%2] = true;
                q.push({2,position,get<2>(tmp)+1});
            }
        }
    }
    cout << "Evil Galazy";
}