#include<iostream>
#include<algorithm>

using namespace std;

int src[9] = {1,2,3,4,5,6,7,8,9}, arr[9], ret = 987654321;

bool calc(){
    if(src[0]+src[1]+src[2]!=15)return false;
    if(src[3]+src[4]+src[5]!=15)return false;
    if(src[6]+src[7]+src[8]!=15)return false;
    if(src[0]+src[3]+src[6]!=15)return false;
    if(src[1]+src[4]+src[7]!=15)return false;
    if(src[2]+src[5]+src[8]!=15)return false;
    if(src[0]+src[4]+src[8]!=15)return false;
    if(src[2]+src[4]+src[6]!=15)return false;
    return true;
}

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 0; i < 9; i++)cin>> arr[i];
    while(next_permutation(src,src+9)){
        if(calc()){
            int sum = 0;
            for(int i = 0; i < 9; i++)sum+=abs(arr[i]-src[i]);
            ret = min(ret,sum);
        }
    }
    cout << ret;
}