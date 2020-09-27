#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define ivec vector<ull>
const int p = 1e9 + 7;
/* template <typename T>
using ivec = vector<T>;
 */
ivec matrixchen(ivec a, ivec b) {
    ivec tmp({((a[0] * b[0]) % p + (a[1] * b[2]) % p) % p,
              ((a[0] * b[1]) % p + (a[1] * b[3]) % p) % p,
              ((a[2] * b[0]) % p + (a[3] * b[2]) % p) % p,
              ((a[2] * b[1]) % p + (a[3] * b[3]) % p) % p});
    return tmp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ull x1, x2, a, b, n;
    cin >> x1 >> x2 >> a >> b >> n;
    ivec tmat({1, 0, 0, 1});
    ivec ans({x2, 0, x1, 0});
    n -= 2;
    for (ivec opMat({b, a, 1, 0}); n > 0; opMat = matrixchen(opMat, opMat), n >>= 1)
        if (n & 1) tmat = matrixchen(tmat, opMat);
    auto tmp = matrixchen(tmat, ans);
    cout << tmp[0] << endl;
}