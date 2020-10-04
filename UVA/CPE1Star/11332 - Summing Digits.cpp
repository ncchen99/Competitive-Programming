#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    string s;
    while (cin >> s, stoi(s)) {
        while (s.size() != 1) {
            ll tmp = 0;
            for (auto c : s)
                tmp += c - '0';
            s = to_string(tmp);
        }
        cout << s << '\n';
    }
}