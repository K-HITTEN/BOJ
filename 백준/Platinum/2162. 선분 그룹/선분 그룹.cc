#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct Line{
    long long x1,y1,x2,y2;
};

int p[3001], N;
vector<Line> v;
vector<int> result;
int _count[3001];

int find(int x){
    if(x==p[x])return x;
    else return p[x] = find(p[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)p[px] = py;
    else p[py] = px;
}

long long ccw(long long px1, long long py1, long long px2, long long py2, long long px3, long long py3){
    long long result = (px1*py2+px2*py3+px3*py1)-(px2*py1+px3*py2+px1*py3);
    if(result < 0) return -1;
    else if(result >0) return 1;
    else return 0;
}

bool check(long long x1, long long y1, long long x2, long long y2, long long x3, long long y3){
    long long i1 = x1, i2 = x2, i3 = x3, j1 = y1, j2 = y2, j3 = y3;
    if(i1>i2)swap(i1,i2);
    if(j1>j2)swap(j1,j2);
    if(i1<=i3&&i3<=i2&&j1<=j3&&j3<=j2){
                return true;
    }
    return false;
}

int main(void){
    fastio;
    long long px1,px2,py1,py2;
    cin >> N;
    for(int i = 0; i < N; i++)p[i] = i;
    for(int i = 0; i < N; i++){
        cin >> px1 >> py1 >> px2 >> py2;
        Line tmp = {px1,py1,px2,py2};
        for(int j = 0; j < v.size(); j++){
            if(find(i) != find(j)){
                long long i1 = ccw(px1,py1,px2,py2,v[j].x1,v[j].y1);
                long long i2 = ccw(px1,py1,px2,py2,v[j].x2,v[j].y2);
                long long j1 = ccw(v[j].x1,v[j].y1,v[j].x2,v[j].y2,px1,py1);
                long long j2 = ccw(v[j].x1,v[j].y1,v[j].x2,v[j].y2,px2,py2);
                if(i1*i2 == -1 && j1*j2 == -1){
                    merge(i,j);
                }else if( i1*i2*j1*j2 == 0){
                    if(i1 == 0 && check(px1,py1,px2,py2,v[j].x1,v[j].y1)){
                        merge(i,j);
                        continue;
                    }if(i2== 0 && check(px1,py1,px2,py2,v[j].x2,v[j].y2)){
                        merge(i,j);
                        continue;
                    }if(j1 == 0 && check(v[j].x1,v[j].y1,v[j].x2,v[j].y2,px1,py1)){
                        merge(i,j);
                        continue;
                    }if(j2 == 0 && check(v[j].x1,v[j].y1,v[j].x2,v[j].y2,px2,py2)){
                        merge(i,j);
                    }
                }
            }
        }
        v.push_back(tmp);
    }
    
    for(int i = 0; i < N; i++){
        result.push_back(p[i]);
        _count[p[i]]++;
    }
    sort(result.begin(),result.end());
    sort(_count,_count+3001,greater<int>());
    result.erase(unique(result.begin(),result.end()),result.end());
    cout << result.size() << "\n" << _count[0];
    
}
