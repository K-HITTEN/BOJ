#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(0)->ios_base::sync_with_stdio(0);
	int N, M, n;
	string s, temp;
	map<string,int> m1;
	map<string,string> m2;
	vector<vector<string>> v;
	cin >> N >> M;
	for(int i = 0; i < N; i++){
	    cin >> s >> n;
	    m1.insert({s,i});
	    vector<string> tmp;
	    for(int i = 0; i < n; i++){
	        cin>>temp;
	        tmp.push_back(temp);
	        m2.insert({temp,s});
	    }
	    sort(tmp.begin(),tmp.end());
	    v.push_back(tmp);
	}
	for(int i = 0; i < M; i++){
	    cin >> temp >> n;
	    if(n){
	        cout << m2[temp] << "\n";
	    }else {
	        for(int j = 0; j < v[m1[temp]].size(); j++)cout << v[m1[temp]][j] << "\n";
	    }
	}
}