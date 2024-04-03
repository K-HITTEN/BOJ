#include <iostream>
#include <queue>
#define fastio cin .tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int wheel[1001][8], T;
queue<int> q;
bool visited[1001];

void turn_left(int idx);
void turn_right(int idx);

void turn_left(int idx){
    q.push(wheel[idx][0]);
    for(int i = 1; i < 8; i++){
        q.push(wheel[idx][i]);
        wheel[idx][i] = q.front();
        q.pop();
    }
    wheel[idx][0] = q.front();
    q.pop();
    int left_wheel = idx-1;
    int right_wheel = idx+1;
    if(left_wheel>=0 && !visited[left_wheel]){
        visited[left_wheel]=true;
        if(wheel[idx][7] != wheel[left_wheel][2])turn_right(left_wheel);
    }
    if(right_wheel<T && !visited[right_wheel]){
        visited[right_wheel] = true;
        if(wheel[idx][3] != wheel[right_wheel][6])turn_right(right_wheel);
    }
}

void turn_right(int idx){
    q.push(wheel[idx][7]);
    for(int i = 6; i >=0; i--){
        q.push(wheel[idx][i]);
        wheel[idx][i] = q.front();
        q.pop();
    }
    wheel[idx][7] = q.front();
    q.pop();
    int left_wheel = idx-1;
    int right_wheel = idx+1;
    if(left_wheel>=0 && !visited[left_wheel]){
        visited[left_wheel]=true;
        if(wheel[idx][5] != wheel[left_wheel][2])turn_left(left_wheel);
    }
    if(right_wheel<T && !visited[right_wheel]){
        visited[right_wheel] = true;
        if(wheel[idx][1] != wheel[right_wheel][6])turn_left(right_wheel);
    }
}

int main(void){
    fastio;
    int K, A, B, score = 0;
    cin >> T;
    string s;
    for(int i = 0; i < T; i++){
        cin >> s;
        for(int j = 0; j < 8; j++){
            wheel[i][j] = s[j]-'0';
        }
    }
    cin >> K;
    for(int i = 0; i < K; i++){
        fill(visited,visited+1001,false);
        cin >> A >> B;
        visited[A-1] = true;
        if(B == 1)turn_left(A-1);
        else turn_right(A-1);
    }
    for(int i = 0; i < T; i++)if(wheel[i][0] == 1)score++;
    cout << score;
}