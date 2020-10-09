#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, arr[300001], c[30001] = {0}, r[30001] = {0}, ax[2] = {0}, ans = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) cin >> arr[i];
    sort(arr, arr + m);
    for (int i = 0, id = arr[0] - 1; i < m; ++i, id = arr[i] - 1) {
        if (r[id / n] == id % n) (++r[id / n] == n ? ans++ : ans);
        if (c[id % n] == id / n) (++c[id % n] == n ? ans++ : ans);
        if (ax[0] == id / n && ax[0] == id % n) (++ax[0] == n ? ans++ : ans);
        if (ax[1] == id / n && ax[1] == n - (id % n) - 1) (++ax[1] == n ? ans++ : ans);
    }
    cout << ans << '\n';
}