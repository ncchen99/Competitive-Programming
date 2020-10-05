#include <bits/stdc++.h>
using namespace std;
int main() {
    int c = 0;
    string s;
    while (getline(cin, s)) {
        for (char ch : s)
            if (ch == '\"')
                cout << (c++ % 2 ? "\'\'" : "``");
            else
                cout << ch;
        cout << '\n';
    }
}