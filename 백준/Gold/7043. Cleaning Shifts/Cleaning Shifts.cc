#include <iostream>
#include <algorithm>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int start,finish;
};

struct cmp{
    bool operator() (info &a, info &b){
        if(a.start == b.start) return a.finish > b.finish;
        else return a.start<b.start;
    }
};

int main(void){
    fastio;
    int N, T;
    cin >> N >> T;
    info arr[25000];
    for(int i = 0; i < N; i++){
        cin >> arr[i].start >> arr[i].finish;
    }
    sort(arr,arr+N, cmp());
    if(arr[0].start>1){
        cout << -1;
        return 0;
    }
    int s = arr[0].start, e = arr[0].finish, count = 1;
    for(int i = 0; i <N; i++){
        if(arr[i].start <= s){
            if(e <arr[i].finish) e = arr[i].finish;
        }else{
            s = e+1;
            count++;
            if(arr[i].start <= s){
                if(e < arr[i].finish) e = arr[i].finish;
            }
            else break;
        }
        if(e >= T)break;
    }
    if(e < T)cout << -1;
    else cout << count;
}
