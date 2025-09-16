#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string a,b;
    char c;
    cin >> a >> c >> b;
    if(c=='+'){
        if(a.length()==b.length()){
            cout << 2;
            for(int i = 0; i < a.length()-1; i++)cout << 0;
        }else{
            cout << 1;
            for(int i = 0; i < abs((int)a.length()-(int)b.length())-1; i++)cout << 0;
            cout << 1;
            for(int i = 0; i < min((int)a.length(),(int)b.length())-1; i++)cout << 0;
        }
    }else{
        cout << 1;
        for(int i = 0; i < a.length()+b.length()-2; i++)cout << 0;
    }
}