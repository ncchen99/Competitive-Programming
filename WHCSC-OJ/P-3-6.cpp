#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
const int oo = 1e9 + 10;
int main() {
    int n, l, ts[maxn] = {0}, th[maxn], maxh = 0, ans = 0;
    cin >> n >> l;
    th[0] = oo;
    ts[n + 1] = l;
    th[n + 1] = oo;
    queue<int> q;
    for (int i = 1; i <= n; i++) cin >> ts[i];
    for (int i = 1; i <= n; i++) cin >> th[i];
    for (int i = 1; i <= n; i++) {
        if (ts[i] + th[i] <= ts[i + 1] || ts[i] - th[i] >= ts[i - 1]) {
            maxh = max(maxh, th[i]);
            th[i] = 0;
            ans++;
            q.push(i, )
        }
    }
}