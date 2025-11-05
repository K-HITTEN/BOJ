#include<iostream>
#include<deque>

using namespace std;

struct info{
    int cnt;
    bool robot;
};

int N, K, tmp, ret = 0, check = 0;
deque<info> dq;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N >> K;
    for(int i = 0; i < 2*N; i++){
        cin >> tmp;
        dq.push_back({tmp,false});
    }
    while(check<K){
        ret++;
        dq.push_front(dq.back());
        dq.pop_back();
        if(dq[N-1].robot)dq[N-1].robot = false;
        for(int i = N-2; i>=0; i--){
            if(dq[i].robot&&!dq[i+1].robot&&dq[i+1].cnt){
                if(i+1!=N-1)dq[i+1].robot = true;
                dq[i].robot = false;
                dq[i+1].cnt--;
                if(!dq[i+1].cnt)check++;
            }
        }
        if(!dq[0].robot&&dq[0].cnt){
            dq[0].robot = true;
            dq[0].cnt--;
            if(!dq[0].cnt)check++;
        }
    }
    cout << ret;
}