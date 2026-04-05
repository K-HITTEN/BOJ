#include<iostream>
using namespace std;

int main(){
    cin.tie(0)->ios::sync_with_stdio(0);
    string s;
    cin >> s;
    int index = -1;
    for(int i = 0; i < 13; i++){
        if(s[i] == '*') index = i;
    }
    if(index == 12){
        int sum = 0;
        for(int i = 0; i < 12; i++){
            if(i % 2 == 1) sum += (s[i] - '0') * 3;
            else sum += (s[i] - '0');
        }
        cout << (10 - sum % 10) % 10;
    }
    else{
        int end = s[12] - '0';
        int sum = 0;
        for(int i = 0; i < 12; i++){
            if(i == index) continue;
            if(i % 2 == 1) sum += (s[i] - '0') * 3;
            else sum += (s[i] - '0');
        }
        for(int i = 0; i <= 9; i++){
            int total;
            if(index % 2 == 1) total = sum + i * 3 + end;
            else total = sum + i + end;
            if(total % 10 == 0){
                cout << i;
                break;
            }
        }
    }
}