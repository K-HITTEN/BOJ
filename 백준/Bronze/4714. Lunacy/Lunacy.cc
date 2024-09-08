#include<iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    double N;
    cout<<fixed;
    cout.precision(2);
    while(true){
        cin >> N;
        if(N < 0)break;
        cout << "Objects weighing " << N << " on Earth will weigh " << N*0.167 << " on the moon.\n";
    }
}