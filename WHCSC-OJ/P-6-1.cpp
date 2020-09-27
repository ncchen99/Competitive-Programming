#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int dp[n + 1] = {0}, a[n + 1] = {0};
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++)
        dp[i] = a[i] + min(dp[i - 1], dp[(i - 2 == -1 ? 0 : i - 2)]);
    cout << dp[n];
}