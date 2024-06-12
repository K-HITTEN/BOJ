#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, U, L;
    cin >> N >> U >> L;
    if(N >= 1000 && (U>=8000 || L >=260))cout << "Very Good";
    else if(N >= 1000) cout << "Good";
    else cout << "Bad"; 
}