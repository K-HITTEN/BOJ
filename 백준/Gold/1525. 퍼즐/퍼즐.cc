#include <iostream>
#include <string>
#include <queue>
#include <tuple>
#include <set>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int idx;
    string s = "";
    char c;
    for(int i = 0; i < 9; i++){
        cin >> c;
        if(c == '0')idx = i;
        s+=c;
    }
    set<string> se;
    se.insert(s);
    queue<tuple<int,int,string>> q;
    q.push({0,idx,s});
    while(!q.empty()){
        tuple<int,int,string> tmp = q.front();
        if(get<2>(tmp) == "123456780"){
            cout<<get<0>(tmp);
            return 0;
        }
        q.pop();
        if(get<1>(tmp)%3 == 0 || get<1>(tmp)%3 == 1 ){
            string s2 = get<2>(tmp);
            swap(s2[get<1>(tmp)],s2[get<1>(tmp)+1]);
            if(se.find(s2) == se.end()){
                se.insert(s2);
                q.push({get<0>(tmp)+1,get<1>(tmp)+1,s2});
            }
        }
        if(get<1>(tmp)%3 == 1 || get<1>(tmp)%3 == 2){
            string s2 = get<2>(tmp);
            swap(s2[get<1>(tmp)],s2[get<1>(tmp)-1]);
            if(se.find(s2) == se.end()){
                se.insert(s2);
                q.push({get<0>(tmp)+1,get<1>(tmp)-1,s2});
            }
        }
        if(get<1>(tmp)<6){
            string s2 = get<2>(tmp);
            swap(s2[get<1>(tmp)],s2[get<1>(tmp)+3]);
            if(se.find(s2) == se.end()){
                se.insert(s2);
                q.push({get<0>(tmp)+1,get<1>(tmp)+3,s2});
            }
        }
        if(get<1>(tmp)>2){
            string s2 = get<2>(tmp);
            swap(s2[get<1>(tmp)],s2[get<1>(tmp)-3]);
            if(se.find(s2) == se.end()){
                se.insert(s2);
                q.push({get<0>(tmp)+1,get<1>(tmp)-3,s2});
            }
        }
    }
    cout << -1;
}