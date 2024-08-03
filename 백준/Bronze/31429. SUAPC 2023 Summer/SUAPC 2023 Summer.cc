#include <iostream>
#define fastio cin.tie(0)->ios_base::sync_with_stdio(0)

using namespace std;

int main(void){
    fastio;
    int arr[12][2] = {{12,1600},{11,894},{11,1327},{10,1311},{9,1004},{9,1178},{9,1357},{8,837},{7,1055},{6,556},{6,773}};
    int N;
    cin >> N;
    cout << arr[N-1][0] << " " << arr[N-1][1];
}