#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> m_list;
    int x;

    while (cin.peek() != '\n' && cin >> x) {
        m_list.push_back(x);
    }

    int n;
    cin >> n;

    int total = 0;

    for (int i = 0; i < n; i++) {
        int b, s;
        double l;

        cin >> b >> l >> s;

        if (s >= 17 && l >= 2.0) {
            total += m_list[b];
        }
    }

    cout << total << endl;

}