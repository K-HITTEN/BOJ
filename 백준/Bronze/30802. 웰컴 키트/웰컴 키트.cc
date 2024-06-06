#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int N, S, M, L, XL, XXL, XXXL, T, P, count = 0;
    cin >> N >> S >> M >> L >> XL >> XXL >> XXXL >> T >> P;
    count += (S/T);
    if(S%T != 0)count++;
    count += (M/T);
    if(M%T != 0)count++;
    count += (L/T);
    if(L%T != 0)count++;
    count += (XL/T);
    if(XL%T != 0)count++;
    count += (XXL/T);
    if(XXL%T != 0)count++;
    count += (XXXL/T);
    if(XXXL%T != 0)count++;
    cout << count << "\n" << N/P << " " << N%P;
}