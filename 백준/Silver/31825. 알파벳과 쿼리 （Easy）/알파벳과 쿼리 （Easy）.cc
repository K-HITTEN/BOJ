#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, Q, tmp1, tmp2, tmp3;
string s;

int check(int start, int finish){
    int ret = 1;
    char c = s[start];
    for(int i = start+1; i < finish; i++){
        if(c == s[i])continue;
        c = s[i];
        ret++;
    }
    return ret;
}

void convert(int start, int finish){
    for(int i = start; i < finish; i++){
        if(s[i] == 'Z')s[i] = 'A';
        else s[i]+=1;
    }
}

int main(void){
    fastio;
    cin >> N >> Q >> s;
    for(int i = 0; i < Q; i++){
        cin >> tmp1 >> tmp2 >> tmp3;
        if(tmp1 == 1)cout << check(tmp2-1, tmp3) << "\n";
        else convert(tmp2-1, tmp3);
    }
}