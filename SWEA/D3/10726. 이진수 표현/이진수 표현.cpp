#include <iostream>

using namespace std;

int main(void){
    cin.tie(NULL);
    cout.tie(NULL);
	int T, N, M;
    cin >> T;
    for(int i = 1; i <= T; i++){
    	cin >> N >> M;
        if((M&((1<<N)-1)) == ((1<<N)-1)){
        	cout << "#" << i << " " << "ON\n";
        }else{
            cout << "#" << i << " " << "OFF\n";
        }
    }
}