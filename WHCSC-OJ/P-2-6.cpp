#include <bits/stdc++.h>
using namespace std;
int const SIZE = 1e5;
int main() {
    int n, m, k;
    cin >> m >> n >> k;
    int a[SIZE] = {0}, b[SIZE] = {0};
    for (int i = 0; i < m; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    sort(a, a + m);
    sort(b, b + n);
    int j = n - 1, ans = 0;
    for (int i = 0; i < m; i++) {
        while (j > 0 && b[j] + a[i] > k) j--;
        if (b[j] + a[i] == k) ans++;
        // cout<<b[j] + a[i]<<endl;
    }
    cout << ans << endl;
}