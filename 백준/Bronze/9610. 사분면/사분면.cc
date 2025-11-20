#include<iostream>

using namespace std;

int N, Q1, Q2, Q3, Q4, AXIS, x, y;

int main(){
    cin.tie(0)->ios_base::sync_with_stdio(0);
    cin >> N;
    while(N--){
        cin >> x >> y;
        if(x == 0 || y == 0)AXIS++;
        else if(x > 0 && y > 0)Q1++;
        else if(x < 0 && y > 0)Q2++;
        else if(x < 0 && y < 0)Q3++;
        else Q4++;
    }
    cout << "Q1: " << Q1 << "\nQ2: " << Q2 << "\nQ3: " << Q3 << "\nQ4: " << Q4 << "\nAXIS: " << AXIS;
}