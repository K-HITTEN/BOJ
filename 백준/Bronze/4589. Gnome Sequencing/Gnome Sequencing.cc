#include<iostream>
#include<vector>
#include<algorithm>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N;
    vector<int> v,k;
    cin >> N;
    cout << "Gnomes:\n";
    for(int i = 0; i < N; i++){
        v.resize(3);
        k.resize(3);
        for(int j = 0; j < 3; j++){
            cin>>v[j];
            k[j] = v[j];
        }
        sort(v.begin(),v.end());
        bool FLAG = false;
        for(int j = 0; j < 3; j++){
            if(v[j] != k[j]){
                FLAG = true;
                break;
            }
        }
        if(FLAG){
            FLAG = false;
            sort(v.begin(),v.end(),greater<int>());
            for(int j = 0; j < 3; j++){
                if(v[j] != k[j]){
                    FLAG = true;
                    break;
                }
            }
            if(FLAG)cout << "Unordered\n";
            else cout << "Ordered\n";
        }
        else cout << "Ordered\n";
    }
}