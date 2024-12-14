#include<iostream>

using namespace std;

bool visited[10001];

int d(int num){
    int sum = num;
    while(num){
        sum += num%10;
        num /= 10;
    }
    return sum;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 1; i <= 10000; i++){
        int n = d(i);
        if(n <= 10000)visited[n] = true;
    }
    for(int i = 1; i <= 10000; i++)if(!visited[i])cout << i << '\n';
}