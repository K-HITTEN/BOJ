#include<iostream>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int A, B, cnt = 0, num = 0;
    string s = "a";
    cin >> A >> B;
    if(B>=A||A>2*B)cout<<"NO";
    else {
        A--;
        while(A!=0&&B!=0){
            s += "ba";
            A--;
            B--;
        }
        while(A!=0){
            cnt++;
            num+=2;
            A--;
        }
        cout << "YES\n" << cnt+1 <<"\n";
        for(int i = 0; i < s.length()-num; i++)cout<<s[i];
        cout<< "\n";
        for(int i = 0; i < cnt; i++){
            cout<< "aba\n";   
        }
    }
}