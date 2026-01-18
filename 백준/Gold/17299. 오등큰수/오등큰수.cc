#include<iostream>
#include<stack>

using namespace std;

int N, A[1000001], F[1000001], NGF[1000001];
stack<int> st;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A[i];
        F[A[i]]++;
    }
    for(int i = N-1; i >= 0; i--){
        while(!st.empty()&&F[st.top()]<=F[A[i]])st.pop();
        if(st.empty())NGF[i] = -1;
        else NGF[i] = st.top();
        st.push(A[i]);
    }
    for(int i = 0; i < N; i++)cout << NGF[i] << ' ';
}