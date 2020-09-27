#include <bits/stdc++.h>
using namespace std;
const int SIZE = 1e5;
int main() {
    int n, k, t = 0, s = 0, best = 0;
    cin >> n >> k;
    set<int> ps({0});
    for (int i = 0; i < n; i++) {
        cin >> t;
        s += t;
        auto itr = ps.lower_bound(s - k);
        best = max(best, s - *itr);
        ps.insert(s);
    }
    cout << best << endl;
}
