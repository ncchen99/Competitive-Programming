#include <bits/stdc++.h>
using namespace std;
int main() {
    int s, e;
    while (cin >> s >> e) {
        if (s > e) {
            swap(s, e);
            cout << e << " " << s << " ";
        } else
            cout << s << " " << e << " ";
        int maxi = 0;
        for (int i = s; i <= e; i++) {
            int t = i, c = 1;
            while (t != 1) {
                if (t % 2)
                    t = 3 * t + 1;
                else
                    t /= 2;
                c++;
            }
            if (c >= maxi)
                maxi = c;
        }
        cout << maxi << endl;
    }
}