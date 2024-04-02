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

vector<info> v,answer,temp;

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
    for(int i = 0; i < v.size(); i++){
        while(answer.size()>=2&&ccw(answer[answer.size()-2].x,answer[answer.size()-2].y,answer[answer.size()-1].x,answer[answer.size()-1].y,v[i].x,v[i].y)<0){
            temp.push_back(answer.back());
            answer.pop_back();
        }
        answer.push_back(v[i]);
    }
    for(int i = temp.size()-1; i >= 0; i--){
        answer.push_back(temp[i]);
    }
    cout << answer.size() << "\n";
    for(int i = 0; i < answer.size(); i++){
        cout << answer[i].x << " " << answer[i].y << "\n";
    }
}