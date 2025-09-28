#include<iostream>
#include<string>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string s;
    while(getline(cin,s)){
        int a = 0, b = 0, c = 0, d = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]==' ')d++;
            else if(s[i]>='a'&&s[i]<='z')a++;
            else if(s[i]>='A'&&s[i]<='Z')b++;
            else c++;
        }
        cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    }
}