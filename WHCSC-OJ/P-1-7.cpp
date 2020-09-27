#include <bits/stdc++.h>
using namespace std;
const int p = 1e4 + 9;
int n;
int arr[27];

int rec(int i, int num) {
    if (i == n) {
        if (num == 1)
            return 1;
        return 0;
    } else
        return rec(i + 1, (num * arr[i]) % p) + rec(i + 1, num);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << rec(0, 1) - 1 << '\n';
}