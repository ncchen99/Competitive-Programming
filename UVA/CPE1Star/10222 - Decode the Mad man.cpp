#include <bits/stdc++.h>
using namespace std;
int main() {
    string keys = "qwertyuiop[]asdfghjkl;'zxcvbnm,.", s;
    map<char, char> mp;
    for (int i = 2; i < keys.size(); i++)
        mp[keys[i]] = keys[i - 2];
    getline(cin, s);
    for (auto c : s) {
        if (c == ' ')
            cout << ' ';
        else
            cout << mp[tolower(c)];
    }
    cout << '\n';
}