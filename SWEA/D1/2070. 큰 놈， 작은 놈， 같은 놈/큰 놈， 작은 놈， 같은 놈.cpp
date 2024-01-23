#include <iostream>

using namespace std;

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	int T,a,b;
    cin >> T;
    for(int i = 1; i <= T; i ++){
    	cin >>a >> b ;
        cout << "#" <<i<<" ";
        if(a>b){
        	cout << ">\n";
        }else if(a==b){
        	cout <<"=\n";
        }else{
            cout << "<\n";
        }
    }
}