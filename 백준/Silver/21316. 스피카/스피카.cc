#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    vector<int> v[13];
    int tmp1, tmp2;
    for(int i = 0; i < 12; i++){
        cin >> tmp1 >> tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }
    for(int i = 1; i < 13; i++){
        if(v[i].size() == 3){
            int s1 = 0,s2 = 0, s3 = 0;
            for(int j = 0; j < v[i].size(); j++){
                if(v[v[i][j]].size()==1)s1++;
                else if(v[v[i][j]].size()==2)s2++;
                else if(v[v[i][j]].size()==3)s3++;
            }
            if(s1==1&&s2==1&&s3==1){
                cout << i;
                return 0;
            }
        }
    }
}