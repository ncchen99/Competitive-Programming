#include <bits/stdc++.h>
using namespace std;
const int maxn = 500001;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, t[maxn], m, s, e;
    cin >> n;
    int k = sqrt(n), c[n / k + 1] = {};
    for (int i = 0; i < n; i++) cin >> t[i];
    for (int i = 0; i < n / k * k; i += k) {
        int ext = INT_MIN;
        for (int j = i; j < n && j < i + k; j++) ext = max(ext, t[j]);
        c[i / k] = ext;
    }
    cin >> m;
    while (m--) {
        cin >> s >> e;
        if (e < s) swap(s, e);
        s -= 1;
        e -= 1;
        int ext = INT_MIN;
        for (int i = s; s % k && i < s + k - (s % k); i++)
            ext = max(ext, t[i]);
        for (int i = (s % k ? s + k - (s % k) : s);
             i < e - (e % k); i += k)
            ext = max(ext, c[i / k]);
        for (int i = e - (e % k); i <= e; i++)
            ext = max(ext, t[i]);
        cout << ext << '\n';
    }
    // system("pause");
    // for (int i = 0, j = 0; i < n; i += k, j++)
    //     cout << j << ' ';
    // cout << endl;
    // for (int i = 0, j = 0; i < n; i += k, j++)
    //     cout << c[j] << ' ';
}
/*
20
1 4 7 8 5 7 88 9 5 6 2 21 4 5 63 6 5 12 3 36
5
1 8
1 4 
17 20
8 16 
2 19 
output: 
88
8
36
63
88
*/