#include <iostream>

using namespace std;

int main(void){
    cin.tie(NULL);
    cout.tie(NULL);
	int T, s;
    cin >> T;
    for(int i = 1; i <= T; i++){
        int sum = 0;
    	for(int j = 0; j <10; j++){
        	cin >> s;
            if(s%2==1){
            	sum += s;
            }
        }
        cout << "#" << i << " " << sum << "\n";
    }
}