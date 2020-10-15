#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
int main() {
    int our[maxn], opp[maxn] = {0}, n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> opp[i];
    for (int i = 0; i < n; i++) cin >> our[i];
    sort(our, our + n);
    sort(opp, opp + n);
    for (int i = 0, j = 0; i < n; i++) {
        if (our[i] > opp[j]) {
            ans++;
            j++;
        } else
            i++;
    }
    cout << ans << '\n';
}