#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    for(int t = 0; t < 3; t++){
        int sum = 0,tmp;
        for(int i = 0; i < 4; i++){
            cin >> tmp;
            if(tmp == 0)sum++;
        }
        switch(sum){
            case 0 : 
                cout << "E\n";
                break;
            case 1 :
                cout << "A\n";
                break;
            case 2 :
                cout << "B\n";
                break;
            case 3 :
                cout << "C\n";
                break;
            case 4 : 
                cout << "D\n";
        }
    }
}