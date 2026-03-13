#include<iostream>
#include<vector>
#include<algorithm>
#include<set>

using namespace std;

set<int> s;
vector<int> A, ret;
int n_a, n_b, tmp;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> n_a >> n_b;
    A.resize(n_a);
    for(int i = 0; i < n_a; i++)cin >> A[i];
    sort(A.begin(),A.end());
    for(int i = 0; i < n_b; i++){
        cin >> tmp;
        s.insert(tmp);
    }
    for(int i = 0; i < n_a; i++)if(s.find(A[i])==s.end())ret.push_back(A[i]);
    cout << ret.size() << '\n';
    for(int num : ret)cout << num << ' ';
}
