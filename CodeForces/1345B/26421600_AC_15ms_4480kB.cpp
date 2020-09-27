#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> mat;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int h = 1, c = 1;
    while (c < 1000000000) {
        c = ((3 / 2.0) * h * h) + ((1 / 2.0) * h);
        mat.push_back(c);
        //cout << c << endl;
        h++;
    }
    while (t--) {
        cin >> c;
        c++;
        int ans = 0;
        while (c != 0) {
            auto low = lower_bound(mat.begin(), mat.end(), c);
            if (low == mat.begin()) break;
            c -= mat[low - mat.begin() - 1];
            //cout << mat[low - mat.begin() - 1] << endl;
            ans++;
        }
        cout << ans << '\n';
    }
}