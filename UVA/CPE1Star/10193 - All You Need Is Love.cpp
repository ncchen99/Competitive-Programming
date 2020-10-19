#include <bits/stdc++.h>
using namespace std;

int to_int(string s) {
    int ans = 0;
    for (int i = s.size() - 1, p = 1; i >= 0; i--, p *= 2)
        ans += (s[i] - '0') * p;
    return ans;
}

int main() {
    string s1, s2;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s1 >> s2;
        cout << "Pair #" << i << ": ";
        if (__gcd(to_int(s1), to_int(s2)) == 1)
            cout << "Love is not all you need!" << endl;
        else
            cout << "All you need is love!" << endl;
    }
}
