#include <iostream>
#include <vector>
#include <string>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, tmp, temp1, temp2, A = 0, B = 0, a = 0, b = 0;
    vector<string> v;
    string s;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> tmp >> s;
        temp2 = temp1;
        temp1 = stoi(s.substr(0,2))*60+stoi(s.substr(3,2));
        if(A>B)a+=(temp1-temp2);
        else if(B>A)b+=(temp1-temp2);
        if(tmp == 1)A++;
        else B++;
        if(i == 0){
            a = 0;
            b = 0;
        }
    }
    if(A>B)a+=(2880-temp1);
    else if(B>A)b+=(2880-temp1);
    printf("%02d:%02d\n", a/60, a%60);
	printf("%02d:%02d\n", b/60, b%60);
}