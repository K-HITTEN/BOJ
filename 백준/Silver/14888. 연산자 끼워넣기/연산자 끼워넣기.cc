#include<iostream>
#include<vector>

using namespace std;

int p,m,x,d,N, min_val = 1000000001, max_val = -1000000001;
vector<int> v;

void calc(int idx,int sum){
    if(idx==N){
        min_val = min(min_val,sum);
        max_val = max(max_val,sum);
        return;
    }
    if(p>0){
        p--;
        calc(idx+1,sum+v[idx]);
        p++;
    }
    if(m>0){
        m--;
        calc(idx+1,sum-v[idx]);
        m++;
    }
    if(x>0){
        x--;
        calc(idx+1,sum*v[idx]);
        x++;
    }
    if(d>0){
        d--;
        calc(idx+1,sum/v[idx]);
        d++;
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    v.resize(N);
    for(int i = 0; i < N; i++)cin >> v[i];
    cin >> p >> m >> x >> d;
    calc(1,v[0]);
    cout << max_val << "\n" << min_val;
}