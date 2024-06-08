#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    string A,B,C;
    int res;
    cin >> A >> B >> C;
    if(A != "FizzBuzz" && A != "Fizz" && A != "Buzz")res = stoi(A)+3;
    else if(B != "FizzBuzz" && B != "Fizz" && B != "Buzz")res = stoi(B)+2;
    else res = stoi(C) +1;
    if(res%5 == 0 && res%3 == 0)cout << "FizzBuzz";
    else if(res%5 == 0)cout <<"Buzz";
    else if(res%3 == 0)cout << "Fizz";
    else cout << res;
}