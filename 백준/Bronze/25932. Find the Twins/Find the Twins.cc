#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int T, N;
    cin >> T;
    while(T--){
        bool A = false, B = false; 
        for(int i = 0; i < 10; i++){
            cin >> N;
            cout << N << " ";
            if(N == 17)A=true;
            else if(N == 18)B=true;
        }
        cout << "\n";
        if(A&&B)cout<<"both\n";
        else if(A)cout<<"zack\n";
        else if(B)cout<<"mack\n";
        else cout<<"none\n";
        cout<<"\n";
    }
}