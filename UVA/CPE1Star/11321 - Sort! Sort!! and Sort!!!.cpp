#include <bits/stdc++.h>
using namespace std;
int n, m;
bool cmp(int &a, int &b) {
    if (a % m == b % m) {
        if (a % 2 && b % 2)
            return a > b;
        if (a % 2 || b % 2)
            return (a % 2 ? 1 : 0);
        if (!(a % 2 && b % 2))
            return a < b;
    } else
        return a % m < b % m;
}
int main() {
    while (cin >> n >> m, n) {
        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];
        sort(vec.begin(), vec.end(), cmp);
        cout << n << ' ' << m << '\n';
        for (auto i : vec)
            cout << i << '\n';
    }
    cout << 0 << ' ' << 0 << '\n';
}
