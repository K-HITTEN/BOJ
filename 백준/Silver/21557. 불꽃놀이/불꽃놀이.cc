#include <iostream>
#include <queue>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, A, B, X;


int main(void){
    fastio;
    
    cin >> N >> A;
    for(int i = 2; i < N; i++) cin >> X;
    cin >> B;
    if(A < B) swap(A, B);
    for(int i = 2; i < N; i++){
        if(A > B) A--;
        else B--;
    }
    
    cout << A;
    
}