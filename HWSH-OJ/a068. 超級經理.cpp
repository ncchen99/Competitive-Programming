#include <bits/stdc++.h>
using namespace std;
int n, k, m;
int p[20001] = {0};

int cut(int l, int r) {
    if (l == r)
        return l;
    int mm = (l + r) / 2, nk = 1, nm = 0, beg = p[0];  //nowK, nowM, begin
    for (int i = 0; i < n; i++) {
        if (p[i] <= beg + mm && nm < m)
            nm++;
        else {
            nk++;
            beg = p[i];
            nm = 1;
        }
    }
    return (nk > k ? cut(mm + 1, r) : cut(l, mm));
}
int main() {
    cin >> n >> k >> m;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);
    cout << cut(0, p[n - 1] - p[0]) << '\n';
}