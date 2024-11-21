#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

struct info{
    int n,t;
};

info arr[100][52];

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N, M, d, h1, h2, m1, m2, idx = 0;
    string s, str;
    map<string,int> m;
    vector<string> name,ans;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> s >> d;
        getline(cin,str);
        h1 = stoi(str.substr(1,2));
        m1 = stoi(str.substr(4,2));
        h2 = stoi(str.substr(7,2));
        m2 = stoi(str.substr(10,2));
        m1 += h1*60;
        m2 += h2*60;
        int week = d/7;
        if(d%7)week++;
        if(m.find(s)==m.end()){
            m.insert({s,idx});
            arr[idx][week].n = 1;
            arr[idx][week].t = m2-m1;
            name.push_back(s);
            idx++;
        }else{
            arr[m[s]][week].n++;
            arr[m[s]][week].t += (m2-m1);
        }
    }
    for(int i = 0; i < idx; i++){
        bool FLAG = false;
        for(int j = 1; j <= M/7; j++){
            if(arr[i][j].n<5||arr[i][j].t<3600){
                FLAG = true;
                break;
            }
        }
        if(!FLAG)ans.push_back(name[i]);
    }
    if(ans.size()==0){
        cout << -1;
        return 0;
    }
    sort(ans.begin(),ans.end());
    for(int i = 0; i < ans.size(); i++)cout << ans[i] << "\n";
}