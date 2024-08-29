#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)
using namespace std;

int main(void) {
    fastio;
    string s;
    int tmp = 0;
    vector<string> v;
	map<string,int> m;
	while(true){
	    getline(cin,s);
	    if(cin.eof())break;
	    tmp++;
	    if(m.find(s) == m.end()){
	        v.push_back(s);
	        m.insert({s,1});
	    }
	    else {
	        m[s]++;
	    }
	}
	sort(v.begin(),v.end());
	cout<< fixed;
	cout.precision(4);
	for(int i = 0; i < v.size(); i++){
	    cout << v[i] << " " << (double)m[v[i]]/tmp*100 << "\n";
	}
}