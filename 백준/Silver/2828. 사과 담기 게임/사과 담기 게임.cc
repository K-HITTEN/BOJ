#include<iostream>

using namespace std;

int N, M, l = 1, r, J, tmp, cnt;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> M >> J;
    r = M;
    while(J--){
        cin >> tmp;
        if(l<=tmp&&r>=tmp)continue;
        else if(tmp<l){
            r -= (l-tmp);
            cnt += (l-tmp);
            l = tmp;
        }else{
            l += (tmp-r);
            cnt += (tmp-r);
            r = tmp;
        }
    }
    cout << cnt;
}