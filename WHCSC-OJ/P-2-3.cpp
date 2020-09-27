#include <bits/stdc++.h>
using namespace std;
#define int long long

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x, y, p, res = 1;
    cin >> x >> y >> p;
    for (int i = x; y > 0; i = i * i % p, y >>= 1)
        if (y & 1)
            res = res * i % p;
    cout << res << endl;
}