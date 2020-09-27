#include <bits/stdc++.h>
using namespace std;
#define int long long

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string x;
    int y, p, res = 1;
    cin >> x >> y >> p;
    int b = x[0] - '0';
    for (int i = 1; i < x.size(); i++) {
        b = (b * 10 % p + x[i] - '0') % p;
    }
    for (int i = b; y > 0; i = i * i % p, y >>= 1)
        if (y & 1) res = res * i % p;
    cout << res << endl;
}