#include <iostream>
#include <stack>
#include <string>

using namespace std;

pair<int,int> arr[26],temp1,temp2;

int main(void){
    int N, tmp1, tmp2;
    char c;
    string s;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> c >> tmp1 >> tmp2;
        arr[(int)c-65]  ={tmp1,tmp2};
    }
    getline(cin,s);
    while(getline(cin,s)){
        stack<pair<int,int>> st;
        int result = 0;
        bool FLAG = false;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(') continue;
            else if(s[i] == ')'){
                temp2 = st.top();
                st.pop();
                temp1 = st.top();
                st.pop();
                if(temp1.second != temp2.first){
                    FLAG = true;
                    cout << "error\n";
                    break;
                }
                result += (temp1.first*temp1.second*temp2.second);
                st.push({temp1.first,temp2.second});
            }else{
                st.push(arr[(int)s[i]-65]);
            }
        }
        if(!FLAG)cout << result <<'\n'; 
    }
}