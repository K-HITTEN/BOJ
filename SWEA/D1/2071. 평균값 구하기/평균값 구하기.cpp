#include <iostream>

using namespace std;

int main(void){
    cin.tie(NULL);
    cout.tie(NULL);
	int T, tmp;
    cin >> T;
    for(int t = 1; t<= T; t++){
    	int sum = 0, raise = 0;
        for(int i = 0; i <10; i++){
        	cin >> tmp;
            sum += tmp;
        }
        if(sum %10 >=5){
        	raise =1;
        }
        cout << "#" << t << " " << (sum/10)+raise <<"\n";
    }
}