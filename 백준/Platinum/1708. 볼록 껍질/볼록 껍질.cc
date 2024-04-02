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
        if(a.y==b.y){
            return a.x<b.x;
        }
        return a.y<b.y;
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
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp1 >> tmp2;
        v.push_back({tmp1,tmp2});
    }
    sort(v.begin(),v.end(),cmp1());
    sort(v.begin()+1,v.end(),cmp2());
    stack<info> st;
    st.push(v[0]);
    st.push(v[1]);
    info temp1 = v[0], temp2 = v[1];
    for(int i = 2; i < v.size(); i++){
        long long tmp = ccw(temp1.x,temp1.y,temp2.x,temp2.y,v[i].x,v[i].y);
        if(tmp<0){
            st.pop();
            temp2 = st.top();
            st.pop();
            temp1 = st.top();
            st.push(temp2);
            i--;
        }else if(tmp==0){
            st.pop();
            st.push(v[i]);
            temp2 = st.top();
        }else{
            st.push(v[i]);
            temp1 = temp2;
            temp2 = st.top();
        }
    }
    cout << st.size();
}