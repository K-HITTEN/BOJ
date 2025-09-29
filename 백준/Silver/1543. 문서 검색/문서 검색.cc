#include<iostream>
#include<string>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int cnt = 0;
    string a, b;
    getline(cin,a);
    getline(cin,b);
    for(int i = 0; i < a.length(); i++){
        if(a.length()-i<b.length())break;
        bool FLAG = false;
        for(int j = 0; j < b.length(); j++){
            if(a[i+j]!=b[j]){
                FLAG = true;
                break;
            }
        }
        if(!FLAG){
            cnt++;
            i += (b.length()-1);
        }
    }
    cout << cnt;
}