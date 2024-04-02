#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

long long ccw(long long px1, long long py1, long long px2, long long py2, long long px3, long long py3){
    return (px1*py2+px2*py3+px3*py1)-(px2*py1+px3*py2+px1*py3);
}

struct info{
    long long x;
    long long y;
};

vector<info> v;

struct cmp1{
    bool operator()(info &a, info &b){
        if(a.x==b.x){
            return a.y<b.y;
        }
        return a.x<b.x;
    }
};

struct cmp2{
    bool operator()(info &a, info &b){
        long long tmp = ccw(v[0].x,v[0].y,a.x,a.y,b.x,b.y);
        if(tmp == 0)return abs(v[0].x-a.x)+abs(v[0].y-a.y)<abs(v[0].x-b.x)+abs(v[0].y-b.y);
        return tmp>0;
    }
};

int main(void){
    fastio;
    int N, tmp1, tmp2;
    char c;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp1 >> tmp2 >> c;
        if(c == 'Y')v.push_back({tmp1,tmp2});
    }
    sort(v.begin(),v.end(),cmp1());
    sort(v.begin()+1,v.end(),cmp2());
    int tmp = v.size()-1;
    for(int i = tmp; i>=1; i--){
        if(ccw(v[0].x,v[0].y,v[tmp-1].x,v[tmp-1].y,v[tmp].x,v[tmp].y)<=0)tmp--;
        else break;
    }
    reverse(v.begin()+tmp,v.end());
    cout << v.size() << "\n";
    for(int i = 0; i < v.size(); i++){
        cout << v[i].x << " " << v[i].y << "\n";
    }
}