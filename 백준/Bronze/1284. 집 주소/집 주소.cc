#include <iostream>

using namespace std;

int N, sum;

int main(){
	cin.tie(0)->ios::sync_with_stdio(0);
	while(true){
		cin >> N;
		sum=0;
		if(!N)break;
		while(N){
			if(N%10==1)sum+=2;
			else if(N%10==0)sum+=4;
			else sum+=3;	
			N/=10;
			sum++;	
		}
		cout << ++sum <<'\n';
	}
}