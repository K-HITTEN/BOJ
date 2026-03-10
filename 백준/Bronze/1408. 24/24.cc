#include<iostream>

using namespace std;

string tmp;
int A, B;

int calc(string s){
    int N, n = s[0] - '0';
    n *= 10;
    n += (s[1] - '0');
    n *= 3600;
    N = n;
    n = s[3] -'0';
    n *= 10;
    n += (s[4] - '0');
    n *= 60;
    N += n;
    n = s[6] - '0';
    n *= 10;
    n += (s[7] - '0');
    return N+n;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> tmp;
    A = calc(tmp);
    cin >> tmp;
    B = calc(tmp);
    B -= A;
    if(B<0)B+=86400;
    A = B/3600;
    if(A==0)cout << "00:";
    else if(A < 10)cout << "0" << A << ":";
    else cout << A << ":";
    B %= 3600;
    A = B/60;
    if(A==0)cout << "00:";
    else if(A < 10)cout << "0" << A << ":";
    else cout << A << ":";
    B %= 60;
    if(B==0)cout << "00";
    else if(B < 10)cout << "0" << B;
    else cout << B;
}