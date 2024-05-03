#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int parent[50001], N, M, Q, tmp1, tmp2;
char c;
bool visited[6];
vector<pair<int,int>> A,B,C,D,E;
vector<long long> res[55000];

int find(int x){
    if(parent[x] == x)return x;
    return parent[x] = find(parent[x]);
}

void merge(int x, int y){
    int px = find(x), py = find(y);
    if(px>py)parent[px] = py;
    else parent[py] = px;
}

void perm(int idx){
    if(idx >10000){
        for(int i = 1; i <= N; i++)parent[i] = i;
        vector<pair<int,int>> v;
        string s = to_string(idx);
        for(int i = 0; i < 5; i++){
            int result = 0;
            switch(s[i]){
                case '1' :
                    v = A;
                    break;
                case '2' :
                    v = B;
                    break;
                case '3' :
                    v = C;
                    break;
                case '4' :
                    v = D;
                    break;
                case '5' :
                    v = E;
            }
            for(int i = 0; i < v.size(); i++){
                if(find(v[i].first) != find(v[i].second)){
                    merge(v[i].first,v[i].second);
                    result++;
                }
            }
            res[idx].push_back(result);
        }
        return;
    }
    else {
        idx *= 10;
        for(int i = 1; i <= 5; i++){
            if(visited[i])continue;
            visited[i] = true;
            perm(idx+i);
            visited[i] = false;
        }
    }
}

int main(void){
    fastio;
    cin >> N >> M >> Q;
    for(int i = 0; i < M; i++){
        cin >> tmp1 >> tmp2 >> c;
        switch(c){
            case 'A' : 
                A.push_back({tmp1,tmp2});
                break;
            case 'B' : 
                B.push_back({tmp1,tmp2});
                break;
            case 'C' : 
                C.push_back({tmp1,tmp2});
                break;
            case 'D' : 
                D.push_back({tmp1,tmp2});
                break;
            case 'E' : 
                E.push_back({tmp1,tmp2});
        }
    }
    perm(0);
    for(int t = 0; t < Q; t++){
        vector<pair<long long,long long>> temp;
        for(int i = 1; i <= 5; i++){
            cin>>tmp1;
            temp.push_back({tmp1,i});
        }
        sort(temp.begin(),temp.end());
        long long check = 0, result = 0;
        for(int i = 0; i < 5; i++){
            check *= 10;
            check += temp[i].second;
        }
        for(int i = 0; i < 5; i++){
            result += (res[check][i]*temp[i].first);
        }
        cout << result << "\n";
    }
}