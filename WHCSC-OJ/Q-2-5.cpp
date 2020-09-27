#include <bits/stdc++.h>
using namespace std;
#define ivec vector<long long int>
const int p = 1e9 + 7;

ivec matrixchen(ivec &a, ivec &b) {
    ivec tmp = {(a[0] * b[0] + a[1] * b[2]) % p,
                (a[0] * b[1] + a[1] * b[3]) % p,
                (a[2] * b[0] + a[3] * b[2]) % p,
                (a[2] * b[1] + a[3] * b[3]) % p};
    return tmp;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while (cin >> n) {
        ivec tmat({1, 0, 0, 1});
        if (n == -1)
            break;
        n -= 1;
        for (ivec opMat({1, 1, 1, 0}); n >= 1; opMat = matrixchen(opMat, opMat), n >>= 1)
            if (n & 1) tmat = matrixchen(tmat, opMat);
        cout << tmat[0] << endl;
    }
}