#include <iostream>
#include <vector>
#include <deque>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

vector<int> v;
deque<char> dq;
int d[7] = {0,2,3,5,7,8,10};

void init(){
    dq.push_back('A');
    dq.push_back('X');
    dq.push_back('B');
    dq.push_back('C');
    dq.push_back('X');
    dq.push_back('D');
    dq.push_back('X');
    dq.push_back('E');
    dq.push_back('F');
    dq.push_back('X');
    dq.push_back('G');
    dq.push_back('X');
}

int main(void){
    fastio;
    int n;
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++)cin >> v[i];
    init();
    for(int i = 0; i < 7; i++){
        deque<char> tmp(dq);
        for(int j = 0; j < d[i]; j++){
            tmp.push_back(tmp.front());
            tmp.pop_front();
        }
        char ans = tmp.front();
        int count = 0;
        for(int j = 0; j < n; j++){
            bool FLAG = false;
            int temp = v[j];
            if(temp < 0){
                FLAG = true;
                temp *= -1;
            }
            if(FLAG){
                for(int k = 0; k < temp; k++){
                    tmp.push_front(tmp.back());
                    tmp.pop_back();
                }
            }
            else{
                for(int k = 0; k < temp; k++){
                    tmp.push_back(tmp.front());
                    tmp.pop_front();
                }
            }
            if(tmp.front() == 'X')break;
            count++;
        }
        if(count == n){
            cout << ans << " " << tmp.front() << "\n";
        }
    }
}