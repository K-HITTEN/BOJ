#include<iostream>

using namespace std;

int tgt[9], src[7];
bool FLAG;

void calc(int idx, int cnt){
    if(FLAG)return;
    if(cnt==7){
        int sum = 0;
        for(int i = 0; i < 7; i++)sum+=src[i];
        if(sum==100)FLAG = true;
        return;
    }
    if(idx==9)return;
    src[cnt] = tgt[idx];
    calc(idx+1,cnt+1);
    calc(idx+1,cnt);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 9; i++)cin>>tgt[i];
    calc(0,0);
    for(int i = 0; i < 7; i++)cout << src[i] <<'\n';
}