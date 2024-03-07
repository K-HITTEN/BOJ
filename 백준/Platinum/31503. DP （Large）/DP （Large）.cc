#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector <int> v, check, check2, num, num2;

int main (void){
    fastio;
    int N, Q;
    cin >> N >> Q;
    v.resize(N);
    int n = 1, tmp;
    for (int i = 0; i < N; i++){
	    cin >> v[i];
	    if (check.size () == 0 || check.back() < v[i]){
		    check.push_back (v[i]);
		    num.push_back (n);
		    n++;
		}else if (check.back () >= v[i]){
		    num.push_back(lower_bound(check.begin (), check.end (), v[i])-check.begin()+ 1);
		    check[lower_bound (check.begin (), check.end (), v[i]) - check.begin ()] = v[i];
		}
	}
    n = 1;
    reverse(v.begin(),v.end());
    for(int i = 0; i < v.size(); i++){
        if (check2.size () == 0 || check2.back() > v[i]){
            check2.push_back(v[i]);
            num2.push_back(n);
            n++;
        }else if(check2.back() <= v[i]){
            num2.push_back(lower_bound(check2.begin(),check2.end(),v[i],[](int a,int b){return a > b;})-check2.begin()+1);
            check2[lower_bound(check2.begin(),check2.end(),v[i],[](int a,int b){return a > b;})-check2.begin()] = v[i];
        }
    }
    reverse(num2.begin(), num2.end());
    for (int i = 0; i < Q; i++){
	    cin >> tmp;
	    cout << (num[tmp-1]+num2[tmp-1]-1) <<"\n";
    }
}