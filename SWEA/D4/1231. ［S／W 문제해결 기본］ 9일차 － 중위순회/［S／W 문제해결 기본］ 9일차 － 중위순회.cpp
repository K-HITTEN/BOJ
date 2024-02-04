#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int N, garbage;
char c[101];

void search(int i){
    if(2*i <= N) search(2*i);
    cout << c[i];
    if(2*i+1 <= N) search(2*i+1);
}
int main(void){
    fastio;
    for(int t = 1; t <=10; t++){
        cin >> N;
        for(int i = 1; i <=N; i++){
            cin >> garbage >> c[i];
            if(N>2*i) cin >> garbage >> garbage;
            else if(N == 2*i) cin >> garbage;
        }
        cout << "#" << t << " ";
        search(1);
        cout <<"\n";
    }
}