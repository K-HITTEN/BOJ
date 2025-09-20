#include<iostream>

using namespace std;

bool visited[10];
char arr[9];
int k, tgt[10];
string max_s = " ", min_s = " ";

void calc(int idx){
    if(idx == k+1){
        string s = "";
        for(int i = 0; i <= k; i++)s+=to_string(tgt[i]);
        if(max_s==" "){
            max_s = min_s = s;
        }else {
            if(stoll(max_s)<stoll(s))max_s = s;
            if(stoll(min_s)>stoll(s))min_s = s;
        }
        return;    
    }
    for(int i = 0; i < 10; i++){
        if(visited[i])continue;
        if(idx == 0|| (arr[idx-1]=='>'&&tgt[idx-1]>i)||(arr[idx-1]=='<'&&tgt[idx-1]<i)){
            visited[i] = true;
            tgt[idx] = i;
            calc(idx+1);
            visited[i] = false;
        }
    }
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> k;
    for(int i = 0; i < k; i++)cin >> arr[i];
    calc(0);
    cout << max_s << "\n" << min_s;
}