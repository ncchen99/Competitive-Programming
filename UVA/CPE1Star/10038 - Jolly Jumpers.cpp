#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int b;
        cin >> b;
        if (n == 1) {
            cout << "Jolly" << '\n';
            continue;
        }
        set<int> j;
        for (int i = 1; i < n; i++) {
            int n = b;
            cin >> b;
            j.insert(abs(n - b));
        }
        set<int>::iterator it = j.begin();
        cout << *(it++);
        // if (*it++ == 1 && j.size() == n - 1 && *--j.end() == n - 1)
        //     cout << "Jolly" << '\n';
        // else
        //     cout << "Not jolly" << '\n';
    }
}