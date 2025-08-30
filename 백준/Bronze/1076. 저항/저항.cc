#include<iostream>
#include<cmath>
#include<map>

using namespace std;

map<string,long long> m;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    string str1, str2, str3;
    long long ret;
    m.insert({"black",0});
    m.insert({"brown",1});
    m.insert({"red",2});
    m.insert({"orange",3});
    m.insert({"yellow",4});
    m.insert({"green",5});
    m.insert({"blue",6});
    m.insert({"violet",7});
    m.insert({"grey",8});
    m.insert({"white",9});
    cin >> str1 >> str2 >> str3;
    ret = (m[str1]*10+m[str2])*pow(10,m[str3]);
    cout << ret;
}