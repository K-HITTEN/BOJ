#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
  int black_cols = 0; 
  int black_rows = 0;
  int black_leftcross = 0;
  int black_rightcross = 0;
  int white_cols = 0;
  int white_rows = 0;
  int white_leftcross = 0;
  int white_rightcross = 0;
};

int main(void){
    fastio;
    info omok[25][25];
    int tmp;
    for(int i = 1; i <= 19; i++){
        for(int j = 1; j <= 19; j++){
            cin >> tmp;
            if(tmp == 0) continue;
            if(tmp == 1){
                omok[i][j].black_cols = omok[i][j-1].black_cols+1;
                omok[i][j].black_rows = omok[i-1][j].black_rows+1;
                omok[i][j].black_leftcross = omok[i-1][j-1].black_leftcross+1;
                omok[i][j].black_rightcross = omok[i-1][j+1].black_rightcross+1;
            }
            else if(tmp == 2){
                omok[i][j].white_cols = omok[i][j-1].white_cols+1;
                omok[i][j].white_rows = omok[i-1][j].white_rows+1;
                omok[i][j].white_leftcross = omok[i-1][j-1].white_leftcross+1;
                omok[i][j].white_rightcross = omok[i-1][j+1].white_rightcross+1;
            }
        }
    }
    for(int i = 1; i <= 19; i++){
        for(int j = 1; j <=19; j++){
            if(omok[i][j+4].black_cols == 5 && omok[i][j+5].black_cols != 6){
                cout << 1 << "\n" << i << " " << j;
                return 0;
            }
            if(omok[i][j+4].white_cols == 5 && omok[i][j+5].white_cols != 6){
                cout << 2 << "\n" << i << " " << j;
                return 0;
            }
            if(omok[i+4][j].black_rows == 5 && omok[i+5][j].black_rows != 6){
                cout << 1 << "\n" << i <<" "<< j;
                return 0;
            }
            if(omok[i+4][j].white_rows == 5 && omok[i+5][j].white_rows != 6){
                cout << 2 << "\n" << i <<" "<< j;
                return 0;
            }
            if(omok[i+4][j+4].black_leftcross == 5 && omok[i+5][j+5].black_leftcross != 6){
                cout << 1 << "\n" << i <<" "<< j;
                return 0;
            }
            if(omok[i+4][j+4].white_leftcross == 5 && omok[i+5][j+5].white_leftcross != 6){
                cout << 2 << "\n" << i <<" "<< j;
                return 0;
            }
            if(omok[i][j].black_rightcross == 5 && omok[i+1][j-1].black_rightcross != 6){
                cout << 1 << "\n" << i <<" "<< j;
                return 0;
            }
            if(omok[i][j].white_rightcross == 5 && omok[i+1][j-1].white_rightcross != 6){
                cout << 2 << "\n" << i <<" "<< j;
                return 0;
            }
        }
    }
    cout << 0;
}