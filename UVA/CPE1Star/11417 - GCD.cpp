#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n, n) {
        int g = 0;
        for (int i = 1; i < n; i++)
            for (int j = i + 1; j <= n; j++)
                g += __gcd(i, j);
        cout << g << '\n';
    }
}
