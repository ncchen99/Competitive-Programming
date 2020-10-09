#include <bits/stdc++.h>
using namespace std;
const int m = 200001;
int main() {
    int n, k, a[m] = {0}, sum = 0, ans = 0, c = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int l = 0, r = 0; r < n; r++) {
        sum += a[r];
        while (sum > k)
            sum -= a[l++];
        if (sum >= ans)
            c = (sum == ans ? ++c : 1);
        ans = max(ans, sum);
    }
    cout << ans << '\n'
         << c << '\n';
}
