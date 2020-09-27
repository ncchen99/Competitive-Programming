#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[14 * 14];
int dp[14][14][14][14];

int calc(int d, int s, int e) {
    int s0 = 0, s1 = 0;
    if (d) {  //橫
        for (int i = s; i <= e; i++) {
            if (arr[i])
                s1++;
            else
                s0++;
        }

    } else {  //直
        for (int i = s; i <= e; i += m) {
            if (arr[i])
                s1++;
            else
                s0++;
        }
    }
    return min(s0, s1);
}

int rec(int si, int ei, int sj, int ej) {
    if (si == ei || sj == ej) return 0;
    if (dp[si][ei][sj][ej] != -1)
        return dp[si][ei][sj][ej];
    else {
        dp[si][ei][sj][ej] = min({
            rec(si + 1, ei, sj, ej) + calc(1, si * m + sj, si * m + ej),
            rec(si, ei - 1, sj, ej) + calc(1, ei * m + sj, ei * m + ej),
            rec(si, ei, sj + 1, ej) + calc(0, si * m + sj, ei * m + sj),
            rec(si, ei, sj, ej - 1) + calc(0, si * m + ej, ei * m + ej),
        });
        // cout<<si<<" "<<ei<<" "<<sj<<" "<<ej<<" "<<dp[si][ei][sj][ej]<<endl;
        return dp[si][ei][sj][ej];
    }
}

int main() {
    memset(dp, -1, sizeof(dp));
    cin >> n >> m;
    for (int i = 0; i < n * m; i++) cin >> arr[i];
    cout << rec(0, n - 1, 0, m - 1);
}