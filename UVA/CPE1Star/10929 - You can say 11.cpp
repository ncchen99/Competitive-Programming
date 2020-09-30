#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    while (cin >> s) {
        if (s[0] == '0' && s.size() == 1)
            return 0;
        int e = 0, o = 0;
        for (int i = 0; i < s.length(); i += 2) {
            o += s[i] - '0';
            if (i + 1 < s.length())
                e += s[i + 1] - '0';
        }
        cout << s;
        if (abs(e - o) % 11)
            cout << " is not a multiple of 11.\n";
        else
            cout << " is a multiple of 11.\n";
    }
}