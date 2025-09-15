#include<iostream>
#include<vector>

using namespace std;

bool check[10000001];
vector<int> v;
int N;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    for(int i = 2; i <= 10000001; i++){
        if(!check[i]){
            if(i%2==1)v.push_back(i);
            for(int j = 2*i; j < 10000001; j += i)check[j] = true;
        }
    }
    while(true){
        cin >> N;
        if(!N)break;
        bool FLAG = false;
        for(int i = 0; i < v.size(); i++){
            if(!check[N-v[i]]){
                cout << N << " = " << v[i] << " + " << N-v[i] << "\n";
                FLAG = true;
                break;
            }
        }
        if(!FLAG)cout << "Goldbach's conjecture is wrong.\n";
    }
}