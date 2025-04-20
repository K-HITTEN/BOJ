#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, tmp, day;
    long long ret = 10000000000;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(ret>tmp){
            ret = tmp;
            day = i;
        }
    }
    cout << day;
}