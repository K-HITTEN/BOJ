#include <iostream>
#include <vector>
#include <algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

string s, s2;
vector<int> v;

int main(void){
    fastio;
    int tmp, tmp2, T;
    cin >> T;
    for(int t = 0; t < T; t++){
        v.clear();
        cin >> s >> tmp2 >> s2;
        tmp = 0;
        for(int i = 1; i < s2.length()-1; i++){
            if(s2[i] == ','){
                v.push_back(tmp);
                tmp = 0;
            }else{
                tmp *= 10;
                tmp += (s2[i]-48);
            }
        }
        if(tmp != 0)v.push_back(tmp);
        int left_idx = 0, right_idx = (tmp2)*-1, reverse_count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'D')left_idx++;
            else{
                reverse_count++;
                swap(left_idx,right_idx);
            }
        }
        if(reverse_count%2==1)left_idx = left_idx*-1;
        else right_idx = right_idx*-1;
        if(reverse_count%2==1 && left_idx < right_idx) cout << "error\n";
        else if (reverse_count%2==0 && left_idx > right_idx) cout << "error\n";
        else if(left_idx == right_idx) cout << "[]\n";
        else{
            cout << "[";
            if(reverse_count%2==1){
                for(int i = left_idx-1; i >right_idx; i--){
                    cout << v[i] <<",";
                }
                cout << v[right_idx] <<"]\n";
            }
            else{
                for(int i = left_idx; i < right_idx-1; i++){
                    cout << v[i] <<",";
                }
                cout << v[right_idx-1] <<"]\n";
            }
        }
    }
}