#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int r, t1 = 0;
        cin >> r;
        vector<int> sn(r);
        for (int i = 0; i < r; i++) cin >> sn[i];
        sort(sn.begin(), sn.end());
        for (int i = 0; i < r; i++)
            t1 += abs(sn[i] - sn[r / 2]);
        cout << t1 << endl;
    }
}