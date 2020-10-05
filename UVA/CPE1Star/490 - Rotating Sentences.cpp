#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int ml = 0;
    vector<string> mat;
    while (getline(cin, s)) {
        mat.push_back(s);
        ml = max(ml, int(s.size()));
    }
    for (int j = 0; j < ml; j++) {
        for (int i = mat.size() - 1; i >= 0; i--) {
            cout << (j >= mat[i].size() ? ' ' : mat[i][j]);
        }
        cout << '\n';
    }
}
