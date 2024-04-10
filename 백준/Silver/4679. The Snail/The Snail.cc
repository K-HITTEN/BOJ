#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int H,D,day;
    double U, F, current, nowup;
    while(true){
        cin >> H >> U >> D >> F;
        if(H == 0)break;
        day = 1;
        current = 0;
        nowup = U;
        while(true){
            current += nowup;
            if(current>H){
                cout << "success on day " << day <<"\n";
                break;
            }
            current -= D;
            if(current < 0){
                cout <<"failure on day " << day << "\n";
                break;
            }
            day++;
            nowup -= U*(F/100.0);
            if(nowup < 0)nowup = 0;
        }
    }
}