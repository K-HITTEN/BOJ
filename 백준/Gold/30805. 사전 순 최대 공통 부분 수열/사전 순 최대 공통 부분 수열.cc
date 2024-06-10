#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

struct info{
    int val,idx;
};

struct cmp{
    bool operator()(info &a, info &b){
        if(a.val == b.val)return a.idx < b.idx;
        return a.val > b.val; 
    }
};

vector<info> A,B;
vector<int> ans;

int main(void){
    fastio;
    int N,M,tmp;
    cin >> N;
    A.resize(N);
    for(int i = 0; i < N; i++){
        cin >> tmp;
        A[i].val = tmp;
        A[i].idx = i;
    }
    cin >> M;
    B.resize(M);
    for(int i = 0; i < M; i++){
        cin >> tmp;
        B[i].val = tmp;
        B[i].idx = i;
    }
    sort(A.begin(),A.end(),cmp());
    sort(B.begin(),B.end(),cmp());
    int idxA = -1, idxB = -1, chkA = 0, chkB = 0;
    while(chkA < N && chkB < M){
        if(A[chkA].idx < idxA){
            chkA++;
            continue;
        }
        if(B[chkB].idx < idxB){
            chkB++;
            continue;
        }
        if(A[chkA].val == B[chkB].val){
            ans.push_back(A[chkA].val);
            idxA = A[chkA].idx;
            idxB = B[chkB].idx;
            chkA++;
            chkB++;
        }
        else if(A[chkA].val > B[chkB].val)chkA++;
        else chkB++;
    }
    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}