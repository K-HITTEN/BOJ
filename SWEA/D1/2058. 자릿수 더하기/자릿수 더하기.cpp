#include <iostream>

using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int N, sum = 0;
    cin >> N;
    for(int i = 0; i<4; i++){
    	sum += (N%10);
        N /= 10;
    }
    cout <<sum;
}