#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, m, d, c[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string mn[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    cin >> t;
    while (t--) {
        cin >> m >> d;
        int sd = 0;
        for (int i = 0; i < m - 1; i++) sd += c[i];
        sd += d;
        cout << mn[(sd % 7 + 5) % 7] << '\n';
    }
}
