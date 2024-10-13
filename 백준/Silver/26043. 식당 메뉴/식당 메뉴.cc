#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, n, a, b;
    queue<pair<int,int>> student;
    queue<int> food;
    vector<int> A,B,C;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> n;
        if(n == 1){
            cin >> a >> b;
            student.push({a,b});
        }else{
            cin >> a;
            food.push(a);
        }
        while(!student.empty()&&!food.empty()){
            pair<int,int> tmp = student.front();
            student.pop();
            int temp = food.front();
            food.pop();
            if(tmp.second == temp)A.push_back(tmp.first);
            else B.push_back(tmp.first);
        }
    }
    while(!student.empty()){
        C.push_back(student.front().first);
        student.pop();
    }
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());
    if(A.empty())cout << "None";
    else for(int i = 0; i < A.size(); i++)cout << A[i] << " ";
    cout << "\n";
    if(B.empty())cout << "None";
    else for(int i = 0; i < B.size(); i++)cout << B[i] << " ";
    cout << "\n";
    if(C.empty())cout << "None";
    else for(int i = 0; i < C.size(); i++)cout << C[i] << " ";
}