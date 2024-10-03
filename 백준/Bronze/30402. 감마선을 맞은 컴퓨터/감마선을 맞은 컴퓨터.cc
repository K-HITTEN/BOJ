#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    bool FLAG = false;
    char c;
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){
           cin >> c;
           if(!FLAG){
               if(c == 'w'){
                   FLAG = true;
                   cout << "chunbae";
               }
               else if(c == 'b'){
                   FLAG = true;
                   cout << "nabi";
               }
               else if(c == 'g'){
                   FLAG = true;
                   cout << "yeongcheol";
               }
           }
        }
    }
}