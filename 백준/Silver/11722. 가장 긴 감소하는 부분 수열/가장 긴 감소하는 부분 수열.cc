#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector <int> check;

int main (void){
    fastio;
    int N;
    cin >> N;
    int tmp;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if (check.size () == 0 || check.back() > tmp){
            check.push_back(tmp);
        }else if(check.back() < tmp){
            check[lower_bound(check.begin(),check.end(),tmp,[](int a,int b){return a > b;})-check.begin()] = tmp;
        }
    }
    cout << check.size();
}