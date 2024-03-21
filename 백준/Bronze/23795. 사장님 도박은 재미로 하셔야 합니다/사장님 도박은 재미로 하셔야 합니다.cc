#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio
using namespace std;int main(void){fastio;int sum = 0, tmp;while(cin >> tmp){if(tmp == -1)break;sum += tmp;}cout << sum;}