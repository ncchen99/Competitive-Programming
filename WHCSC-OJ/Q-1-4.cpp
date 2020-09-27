#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int SIZE = 5e4 + 5;
const double eps = 0.00001;
int n, K;
ll arr[SIZE] = {0}, ps[SIZE] = {0}, psig[SIZE] = {0};

ll cut(int l, int r, int k) {
    if (r - l < 3 || k == 0) return 0;
    int p;
    double m = (double)(psig[r] - psig[l]) / (double)(ps[r] - ps[l]);
    if (m - int(m) != 0.5)
        p = round(m);
    else
        p = floor(m);
    if (p >= r) p = r - 1;
    if (p <= l + 1) p = l + 2;
    // cout << m << " " << l + 1 << " " << r << " " << p << " " << arr[p] << endl;
    return arr[p] + cut(l, p - 1, k - 1) + cut(p, r, k - 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> K;
    cin >> arr[1];
    ps[1] = arr[1];
    psig[1] = arr[1] * 1;
    for (int i = 2; i <= n; i++) {
        cin >> arr[i];
        ps[i] = arr[i] + ps[i - 1];
        psig[i] = arr[i] * i + psig[i - 1];
        // cout << ps[i] << " " << psig[i] << endl;
    }
    // cout << SIZE << endl;
    cout << cut(0, n, K) << endl;
}