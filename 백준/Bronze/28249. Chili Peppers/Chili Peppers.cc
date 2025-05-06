#include<iostream>
#include<map>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, sum = 0;
    string s;
    map<string,int> m;
    m.insert({"Poblano",1500});
    m.insert({"Mirasol",6000});
    m.insert({"Serrano",15500});
    m.insert({"Cayenne",40000});
    m.insert({"Thai",75000});
    m.insert({"Habanero",125000});
    cin >> N;
    while(N--){
        cin >> s;
        sum += m[s];
    }
    cout << sum;
}
