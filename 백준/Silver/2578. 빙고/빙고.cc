#include<iostream>

using namespace std;

int arr[7][7], cnt, ret, tmp;
pair<int,int> chk[26];
bool FLAG;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 6; j++){
            cin >> arr[i][j];
            chk[arr[i][j]] = {i,j};
        }
    }
    for(int i = 1; i < 26; i++){
        cin >> tmp;
        arr[chk[tmp].first][0]++;
        arr[0][chk[tmp].second]++;
        if(chk[tmp].first == chk[tmp].second){
            arr[0][0]++;
            if(arr[0][0]==5)cnt++;
        }
        if(chk[tmp].first+chk[tmp].second==6){
            arr[0][6]++;
            if(arr[0][6]==5)cnt++;
        }
        if(arr[chk[tmp].first][0]==5)cnt++;
        if(arr[0][chk[tmp].second]==5)cnt++;
        if(!FLAG&&cnt>2){ 
            FLAG = true;
            ret = i;
        }
    }
    cout << ret;
}