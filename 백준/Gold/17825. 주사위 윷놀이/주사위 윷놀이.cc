#include<iostream>

using namespace std;

int map[33] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,21,23,24,25,26,27,20,29,30,25,32,25},
score[33] ={0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,0,13,16,19,25,30,35,28,27,26,22,24},
turn[33], arr[10], horse[4], ret = 0;
bool visited[33];

void calc(int idx, int sum){
    if(idx==10){
        ret = max(ret, sum);
        return;
    }
    for(int i = 0; i < 4; i++){
        int now = horse[i], next = horse[i], cnt = arr[idx];
        if(turn[now]){
            next = turn[now];
            cnt--;
        }
        while(cnt--)next = map[next];
        if(next != 21 && visited[next])continue;
        visited[now] = false;
        visited[next] = true;
        horse[i] = next;
        calc(idx+1,sum+score[next]);
        horse[i] = now;
        visited[next] = false;
        visited[now] = true;
    }
}


int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    turn[5] = 22;
    turn[10] = 31;
    turn[15] = 28;
    turn[25] = 26;
    for(int i = 0; i < 10; i++)cin >> arr[i];
    calc(0,0);
    cout << ret;
}