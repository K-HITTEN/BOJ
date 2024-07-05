#include <iostream>
#include <vector>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int n, sum = 0;
vector<int> v;

void calc(int start, int finish){
    if(finish - start <= 1)return;
    if(finish - start == 2){
        sum += (v[start+1]*v[finish]);
        return;
    }
    int mid = (finish+start)/2;
    if((finish-start)%2 == 1)mid++;
    calc(start,mid);
    calc(mid,finish);
}

int main(void){
    fastio;
    cin >> n;
    v.resize(n+1);
    for(int i = 1; i <= n; i++)v[i] = i;
    calc(0,n);
    cout << sum;
}