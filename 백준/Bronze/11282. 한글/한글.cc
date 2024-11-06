#include<iostream>
#include<string>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    string s;
    cin >> N;
    N+=3071;
    s.push_back(N/4096+234);
    s.push_back(N/64%64+128);
    s.push_back(N%64+128);
    cout<<s;
}