#include <iostream>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int map[20][20];
bool line[20];
int T, N, X, count = 0;

void row_check(){
    for(int i = 0; i < N; i++){
        bool FLAG = false;
        int check = 0;
        fill(line,line+20,false);
        for(int j = 1; j < N; j++){
            if(abs(map[i][j]-map[i][j-1])>=2){
                FLAG = true;
                break;
            }
        }
        if(FLAG)continue;
        for(int j = 1; j < N; j++){
            if(map[i][j-1]+1==map[i][j]){
                int idx = j-X;
                if(idx<0){
                    FLAG = true;
                    break;
                }else{
                    for(int k= j-1; k >=idx; k--){
                        if(line[k]){
                            FLAG = true;
                            break;
                        }
                        line[k] = true;
                    }
                }
            }
        }
        if(FLAG)continue;
        for(int j = 0; j < N-1; j++){
            if(map[i][j+1]+1==map[i][j]){
                int idx = j+X;
                if(idx>=N){
                    FLAG = true;
                    break;
                }else{
                    for(int k= j+1; k <=idx; k++){
                        if(line[k]){
                            FLAG = true;
                            break;
                        }
                        line[k] = true;
                    }
                }
            }
        }
        if(FLAG)continue;
        else count++;
    }
}

void cols_check(){
    for(int i = 0; i < N; i++){
        bool FLAG = false;
        int check = 0;
        fill(line,line+20,false);
        for(int j = 1; j < N; j++){
            if(abs(map[j][i]-map[j-1][i])>=2){
                FLAG = true;
                break;
            }
        }
        if(FLAG)continue;
        for(int j = 1; j < N; j++){
            if(map[j-1][i]+1==map[j][i]){
                int idx = j-X;
                if(idx<0){
                    FLAG = true;
                    break;
                }else{
                    for(int k= j-1; k >=idx; k--){
                        if(line[k]){
                            FLAG = true;
                            break;
                        }
                        line[k] = true;
                    }
                }
            }
        }
        if(FLAG)continue;
        for(int j = 0; j < N-1; j++){
            if(map[j+1][i]+1==map[j][i]){
                int idx = j+X;
                if(idx>=N){
                    FLAG = true;
                    break;
                }else{
                    for(int k= j+1; k <=idx; k++){
                        if(line[k]){
                            FLAG = true;
                            break;
                        }
                        line[k] = true;
                    }
                }
            }
        }
        if(FLAG)continue;
        else count++;
    }
}

int main(void){
    fastio;
    cin >> T;
    for(int t = 1; t <= T; t++){
        cin >> N >> X;
        count = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> map[i][j];
            }
        }
        row_check();
        cols_check();
        cout << "#" << t << " " << count << "\n";
    }
}