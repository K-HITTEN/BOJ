#include<iostream>
#include<string>

using namespace std;


string X;
int sum, cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> X;
    while(X.length()>1){
        cnt++;
        sum = 0;
        for(int i = 0; i < X.length(); i++)sum+=(X[i]-'0');
        X = to_string(sum);
    }
    cout << cnt << "\n";
    if(stoi(X)%3)cout << "NO";
    else cout << "YES";
}