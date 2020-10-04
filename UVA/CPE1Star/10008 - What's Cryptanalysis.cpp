#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int> &a, pair<char, int> &b) {
    if (a.second != b.second)
        return a.second > b.second;
    else
        return a.first < b.first;
}

int main() {
    string s;
    cin >> s;
    vector<pair<char, int> > vec(256, make_pair('0', 0));
    while (getline(cin, s))
        for (auto c : s)
            if ('A' <= toupper(c) && toupper(c) <= 'Z')
                vec[toupper(c)] = make_pair(toupper(c), ++vec[toupper(c)].second);
    sort(vec.begin(), vec.end(), cmp);
    for (auto e : vec) {
        if (!e.second) break;
        cout << e.first << " " << e.second << '\n';
    }
}
