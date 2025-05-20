#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int sum = 0;
    char c;
    for(int i = 0; i < 64; i++){
        cin >> c;
        if(c=='p')sum-=1;
        else if(c=='P')sum+=1;
        else if(c=='n'||c=='b')sum-=3;
        else if(c=='N'||c=='B')sum+=3;
        else if(c=='r')sum-=5;
        else if(c=='R')sum+=5;
        else if(c=='q')sum-=9;
        else if(c=='Q')sum+=9;
    }
    cout << sum;
}