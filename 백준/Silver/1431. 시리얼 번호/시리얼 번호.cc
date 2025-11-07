#include<iostream>
#include<cctype>
#include<vector>
#include<algorithm>

using namespace std;

struct cmp{
    int sum(string a){
        int _sum = 0;
        for(int i = 0; i < a.length(); i++)if(isdigit(a[i]))_sum += (a[i]-'0');
        return _sum;
    }
    
    bool operator()(string &a, string &b){
        if(a.length()==b.length()&&sum(a)==sum(b))return a<b;
        else if(a.length()==b.length())return sum(a)<sum(b);
        else return a.length()<b.length();
    }
};

int N;
vector<string> v;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    sort(v.begin(),v.end(),cmp());
    for(int i = 0; i < N; i++)cout << v[i] << '\n';
}