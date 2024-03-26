#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

char result[3080][6150];

void make_star(int top_y,int top_x, int left_y,int left_x, int right_y, int right_x, int N){
    if(N==3){
        result[top_y][top_x] = '*';
        result[top_y+1][top_x-1] = '*';
        result[top_y+1][top_x+1] = '*';
        for(int i = left_x; i <=right_x; i++)result[top_y+2][i] = '*';
        return;
    }
    make_star(top_y,top_x,N/2,left_x+N/2,N/2,right_x-N/2,N/2);
    make_star(top_y+N/2,top_x-N/2,left_y,left_x,right_y,right_x-N,N/2);
    make_star(top_y+N/2,top_x+N/2,left_y,left_x+N,right_y,right_x,N/2);
}

int main(void){
    fastio;
    fill(&result[0][0],&result[3079][6149],' ');
    int N;
    cin >> N;
    make_star(1,N,N,1,N,2*N-1,N);
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <=2*N; j++){
            cout << result[i][j];
        }
        cout << "\n";
    }
}