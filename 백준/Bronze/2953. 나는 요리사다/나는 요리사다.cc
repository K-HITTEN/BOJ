#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int tmp, winner = 1, score = 0, sum;
    for(int i = 0; i < 4; i++){
        cin >> tmp;
        score += tmp;
    }
    for(int i = 2; i < 6; i++){
        sum = 0;
        for(int i = 0; i < 4; i++){
            cin >> tmp;
            sum += tmp;
        }
        if(sum > score){
            score = sum;
            winner = i;
        }
    }
    cout << winner << " " << score;
}