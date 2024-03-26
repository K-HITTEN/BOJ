#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int src[9] = {1,2,3,4,5,6,7,8,9};
int tgt[9] = {0,};
bool finish = false;
int m_max = 1, f_min = INT_MAX, n; 

void backtracking(int tgtIdx,int sum){
    if(tgtIdx == n){
        if(m_max<sum&&sum<f_min){
            f_min = sum;
            for(int i = 0; i < tgtIdx; i++)cout << tgt[i] << " ";
            finish = true;
        }
        return;
    }
    for(int i = 0; i < 9; i++){
        tgt[tgtIdx] = src[i];
        backtracking(tgtIdx+1,sum*src[i]);
        if(finish == true) return;
    }
}

int main(void){
    fastio;
    int tmp;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> tmp;
        m_max *= tmp;
    }
    if(m_max == pow(9,n))cout << -1;
    else backtracking(0,1);
}