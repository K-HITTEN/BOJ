#include<iostream>
#include<stack>

using namespace std;

int arr[1000001], nge[1000001], N;
stack<int> st;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    for(int i = 0; i < N; i++)cin >> arr[i];
    for(int i = 0; i < N; i++){
        while(!st.empty()&&arr[st.top()]<arr[i]){
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }
    for(int i = 0; i < N; i++)cout << nge[i] << " ";
}