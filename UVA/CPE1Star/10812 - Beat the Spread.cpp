#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, n;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        if (a < b || a%2 != b%2) {
            cout << "impossible" << '\n';
            continue;
        } else
            cout << (a + b) / 2 << ' ' << (a - b) / 2 << '\n';
    }
}