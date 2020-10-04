#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, int> ump;
    string s, tmp;
    cin >> s;
    while (getline(cin, s)) {
        stringstream ss(s);
        int c = 0;
        while (getline(ss, tmp, ' ') && ++c)
            if (c == 1) ump[tmp]++;
    }
    for (auto e : ump)
        cout << e.first << " " << e.second << '\n';
}
