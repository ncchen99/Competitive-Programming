
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int n, m, x, y;
    cin >> n >> m;
    vector<int> ma(n * n, 0);
    // memset(ma, 0, sizeof(ma));
    while (m--) {
        cin >> x >> y;
        ma[(x - 1) * n + (y - 1)] = 1;
    }
    for (int i = 0; i < n; i++) {
        int c = 0;
        vector<int> p;
        if (ma[i * n]) c = 1;
        for (int j = 1; j < n; j++) {
            if (ma[i * n + j]) {
                c++;
            } else {
                if (c) {
                    p.push_back(c);
                    c = 0;
                }
            }
        }
        if (ma[i * n + n - 1]) p.push_back(c);
        if (!p.size()) p.push_back(0);
        for (int k = 0; k < p.size(); k++) cout << p[k] << " ";
        cout << '\n';
    }
    for (int j = 0; j < n; j++) {
        int c = 0;
        vector<int> p;
        if (ma[j]) c = 1;
        for (int i = 1; i < n; i++) {
            if (ma[i * n + j]) {
                c++;
            } else {
                if (c) {
                    p.push_back(c);
                    c = 0;
                }
            }
        }
        if (ma[n * (n - 1) + j]) p.push_back(c);
        if (!p.size()) p.push_back(0);
        for (int k = 0; k < p.size(); k++) cout << p[k] << " ";
        cout << '\n';
    }
    //system("pause");
}