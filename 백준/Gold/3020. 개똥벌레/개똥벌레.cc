#include<iostream>

using namespace std;

int top[500001], bottom[500001], N, H, tmp, L = 200001, cnt;

int main(){
    cin >> N >> H;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(i%2){
            bottom[H-tmp+1]++;
        }else{
            top[tmp]++;
        }
    }
    for(int i = 1; i <= H; i++){
        top[H-i+1] += top[H-i+2];
        bottom[i] += bottom[i-1]; 
    }
    for(int i = 1; i <= H; i++){
        if(top[i]+bottom[i] < L){
            L = top[i]+bottom[i];
            cnt = 1;
        }else if(top[i]+bottom[i] == L)cnt++;
    }
    cout << L << ' ' << cnt;
}