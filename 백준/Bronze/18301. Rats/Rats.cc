#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int n1,n2,n12;
    cin >> n1 >> n2 >> n12;
    cout << (n1+1)*(n2+1)/(n12+1)-1;
}