#include<iostream>
#include<vector>
#include<climits>

using namespace std;

struct info{
    int c;
    bool visited;
};

int N;
long long ret = LLONG_MIN;
char tmp;
vector<info> v;

void calc(vector<info> arr){
    for(int i = 1; i < N; i+=2){
        if(!arr[i-1].visited&&!arr[i].visited&&!arr[i+1].visited){
            int t1 = arr[i-1].c, t2 = arr[i+1].c;
            if(arr[i].c == 43)arr[i-1].c = arr[i+1].c = (arr[i-1].c + arr[i+1].c);
            else if(arr[i].c == 45)arr[i-1].c = arr[i+1].c = (arr[i-1].c - arr[i+1].c);
            else arr[i-1].c = arr[i+1].c = (arr[i-1].c * arr[i+1].c);
            arr[i-1].visited = arr[i].visited = arr[i+1].visited = true;
            calc(arr);
            arr[i-1].visited = arr[i].visited = arr[i+1].visited = false;
            arr[i-1].c = t1;
            arr[i+1].c = t2;
        }
    }
    for(int i = 1; i < N; i+=2){
        if(arr[i].c == '*'&&!arr[i].visited){
            arr[i].visited = true;
            int k = arr[i-1].c*arr[i+1].c;
            for(int j = i; j > 0; j-=2){
                if(arr[j].visited)arr[j-1].c = k;
                else break;
            }
            for(int j = i; j < N; j+=2){
                if(arr[j].visited)arr[j+1].c = k;
                else break;
            }
        }
    }
    long long res = arr[0].c;
    int i = 1;
    if(arr[0].visited)i=3;
    for(i; i < N; i+=2){
        if(arr[i].visited)continue;
        if(arr[i].c == '+')res += arr[i+1].c;
        else res -= arr[i+1].c;
    }
    ret = max(res,ret);
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp;
        if(tmp=='+')v.push_back({43,false});
        else if(tmp=='-')v.push_back({45,false});
        else if(tmp=='*')v.push_back({42,false});
        else v.push_back({(int)(tmp-'0'),false});
    }
    calc(v);
    cout << ret;
}