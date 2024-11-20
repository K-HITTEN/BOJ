#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct info {
	int N, A, B, C, D;
};

struct cmp1 {
	bool operator()(info &a, info &b) {
		if(a.A == b.A)return a.N < b.N;
		return a.A > b.A;
	}
};
struct cmp2 {
	bool operator()(info &a, info &b) {
		if(a.B == b.B)return a.N < b.N;
		return a.B > b.B;
	}
};
struct cmp3 {
	bool operator()(info &a, info &b) {
        if(a.C == b.C)return a.N < b.N;
		return a.C > b.C;
	}
};
struct cmp4 {
	bool operator()(info &a, info &b) {
	    if(a.D == b.D)return a.N < b.N;
		return a.D > b.D;
	}
};

bool visited[200001];

int main() {
	cin.tie(0)->ios_base::sync_with_stdio(0);
	int N, n, a, b, c, d;
	cin >> N;
	vector<info> v;
	for(int i = 0; i < N; i++) {
		cin >> n >> a >> b >> c >> d;
		v.push_back({n,a,b,c,d});
	}
	sort(v.begin(),v.end(),cmp1());
	for(int i = 0; i < v.size(); i++) {
		if(!visited[v[i].N]) {
			visited[v[i].N] = true;
			cout << v[i].N << " ";
			break;
		}
	}
	sort(v.begin(),v.end(),cmp2());
	for(int i = 0; i < v.size(); i++) {
		if(!visited[v[i].N]) {
			visited[v[i].N] = true;
			cout << v[i].N << " ";
			break;
		}
	}
	sort(v.begin(),v.end(),cmp3());
	for(int i = 0; i < v.size(); i++) {
		if(!visited[v[i].N]) {
			visited[v[i].N] = true;
			cout << v[i].N << " ";
			break;
		}
	}
	sort(v.begin(),v.end(),cmp4());
	for(int i = 0; i < v.size(); i++) {
		if(!visited[v[i].N]) {
			visited[v[i].N] = true;
			cout << v[i].N << " ";
			break;
		}
	}
}