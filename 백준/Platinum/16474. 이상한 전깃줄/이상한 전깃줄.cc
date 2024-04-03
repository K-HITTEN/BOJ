#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int number;
    int idx;
};

struct Wire{
    int left;
    int right;
};

struct cmp{
    bool operator()(Wire &a, Wire &b){
        if(a.right == b.right)return a.left>b.left;
        return a.right<b.right;
    }  
};

int _left[2001], _right[2001];
vector<Wire> wire;
vector<int> v;

int main(void){
    fastio;
    int N, M, K, tmp, tmp2;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        _left[tmp] = i;
    }
    for(int i = 0; i < M; i++){
        cin >> tmp;
        _right[tmp] = i;
    }
    cin >> K;
    for(int i = 0; i < K; i++){
        cin >> tmp >> tmp2;
        wire.push_back({_left[tmp],_right[tmp2]});
    }
    sort(wire.begin(),wire.end(),cmp());
    for (int i = 0; i < K; i++) {
		if (v.size() == 0 || v.back()<wire[i].left ) {
			v.push_back(wire[i].left);
		}
		else if (v.back() > wire[i].left) {
			v[lower_bound(v.begin(), v.end(), wire[i].left)- v.begin()] = wire[i].left;
		}
	}
    cout << K-v.size();
}
