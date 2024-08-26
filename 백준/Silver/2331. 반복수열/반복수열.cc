#include <iostream>
#include <vector>
#include <cmath>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int arr[250000], A ,P, cnt = 0;
vector<int> v;

int calc(int k){
    int sum = 0;
    while(k!=0){
        sum += pow(k%10,P);
        k/=10;
    }
    return sum;
}

int main(void){
    fastio;
    cin >> A >> P;
    arr[A]++;
    v.push_back(A);
    while(true){
        A = calc(A);
        if(arr[A]==0){
            v.push_back(A);
        }
        arr[A]++;
        if(arr[A]==3)break;
    }
    for(int i = 0; i < v.size(); i++){
        if(arr[v[i]] == 1)cnt++;
    }
    cout << cnt;
}