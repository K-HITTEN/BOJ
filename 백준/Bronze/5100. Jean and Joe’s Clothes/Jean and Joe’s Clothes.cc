#include<iostream>
#include<cctype>
#include<string>
#define K <<' '<<

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N,a,b,c,d,e;
    string s;
    while(true){
        cin >> N;
        if(!N)break;
        a=b=c=d=e=0;
        while(N--){
            cin >> s;
            if(s=="M"||s=="L")a++;
            else if(s=="S")b++;
            else {
                bool FLAG = false;
                for(int i = 0; i < s.length(); i++){
                    if(!isdigit(s[0])){
                        FLAG = true;
                        break;
                    }
                }
                if(FLAG)e++;
                else {
                    if(stoi(s)>=12)c++;
                    else d++;
                }
            }
        }
        cout<<a K c K d K b K e<<"\n"; 
    }
}