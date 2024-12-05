#include<iostream>

using namespace std;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    int N;
    long long lt,wt,le,we;
    cin >> N;
    while(N--){
        cin >> lt >> wt >> le >> we;
        if(lt*wt>le*we)cout<<"TelecomParisTech\n";
        else if(lt*wt<le*we)cout<<"Eurecom\n";
        else cout << "Tie\n";
    }
}