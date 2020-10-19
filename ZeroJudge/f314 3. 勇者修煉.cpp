#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4 + 5, maxm = 55;

int m, n, maxv = INT_MIN, ans = 0;
int mp[maxm][maxn] = {0};
int v[maxm][maxn] = {0};
int r[maxm][maxn] = {0};
int va[maxm][maxn] = {0};
int d[4][2] = {{0, 1}, {0, -1}, {1, 0}};
void dfs(int i, int j, int value) {
    value += mp[i][j];
    if (value < va[i][j]) {
        return;
    }
    va[i][j] = value;
    v[i][j] = 1;
    for (int c = 0; c < 3; c++) {
        if (i + d[c][0] >= m) {
            maxv = max(maxv, value);
            v[i][j] = 0;
            return;
        }
        if (j + d[c][1] < n && j + d[c][1] >= 0 && !v[i + d[c][0]][j + d[c][1]])
            dfs(i + d[c][0], j + d[c][1], value);
    }
    v[i][j] = 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mp[i][j];
            va[i][j] = INT_MIN;
        }
    }

    for (int j = 0; j < n; j++)
        dfs(0, j, 0);
    cout << maxv << '\n';
}