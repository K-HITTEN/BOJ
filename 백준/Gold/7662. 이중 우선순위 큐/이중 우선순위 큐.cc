#include <iostream>
#include <queue>
#include <vector>
#include <map>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int T;
    cin >> T;
    for(int t = 0; t < T; t++){
        map <int,int> m;
        priority_queue<int> pq1;
        priority_queue<int, vector<int>, greater<int>> pq2;
        int k, size = 0, tmp;
        char c;
        cin >> k;
        for(int i = 0; i < k; i++){
            cin >> c >> tmp;
            switch(c){
            case('I'):
                if(m.find(tmp) != m.end())m[tmp]++;
                else{
                    m.insert({tmp,1});
                }
                pq1.push(tmp);
                pq2.push(tmp);
                size++;
                break;
            case('D'):
                if(size == 0) continue;
                while(m[pq1.top()] == 0)pq1.pop();
                while(m[pq2.top()] == 0)pq2.pop();
                if(tmp == -1) {
                    tmp = pq2.top();
                    pq2.pop();
                    m[tmp]--;
                }
                else{
                    tmp = pq1.top();
                    pq1.pop();
                    m[tmp]--;
                }
                size--;
            }
        }
        if(size == 0) cout << "EMPTY\n";
        else {
            while(m[pq1.top()] == 0)pq1.pop();
            while(m[pq2.top()] == 0)pq2.pop();
            cout << pq1.top() << " " << pq2.top() <<"\n";
        }
    }
}