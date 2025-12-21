#include<iostream>
#include<stack>

using namespace std;

int arr[21], a, b;
stack<int> st;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 1; i < 21; i++)arr[i] = i;
    for(int T = 0; T < 10; T++){
        cin >> a >> b;
        for(int i = a; i <= b; i++)st.push(arr[i]);
        for(int i = a; i <= b; i++){
            arr[i] = st.top();
            st.pop();
        }
    }
    for(int i = 1; i < 21; i++)cout << arr[i] << ' ';
}