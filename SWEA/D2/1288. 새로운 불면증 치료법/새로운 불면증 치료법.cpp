#include <iostream>

using namespace std;

int main(void){
    cin.tie(NULL);
    cout.tie(NULL);
	int T,N;
    cin >> T;
    for(int i = 1; i <=T; i++){
    	cin >> N;
        int bit = 0, count = 0;
        while(bit != ((1<<10)-1)){
        	count++;
            int tmp = count*N;
            while(tmp != 0){
            	bit = bit|(1<<(tmp%10));
                tmp /= 10;
            }
        }
        cout << "#" << i << " " << count*N <<"\n";
    }
}