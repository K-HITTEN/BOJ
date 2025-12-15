#include<iostream>

using namespace std;

char c;
bool FLAG_r[51], FLAG_c[51];
int cnt_r, cnt_c, N, M;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> c;
            if(c == 'X')FLAG_r[i] = FLAG_c[j] = true;
        }
    }
    for(int i = 0; i < N; i++)if(!FLAG_r[i])cnt_r++;
    for(int i = 0; i < M; i++)if(!FLAG_c[i])cnt_c++;
    cout << min(cnt_r,cnt_c)+abs(cnt_r-cnt_c);
}