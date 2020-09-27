#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int SIZE = 5e5 + 50;
int n, l;
int arr[SIZE] = {0};

ll cut(int l, int r) {
    if (r - l <= 1)
        return 0;
    int p = lower_bound(arr + l, arr + r, (arr[l] + arr[r]) / 2) - arr;

    if (arr[p - 1] - arr[l] >= arr[r] - arr[p])
        p--;
    // cout << l << " " << r << " " << p << " " << arr[p] << endl;
    return arr[r] - arr[l] + cut(l, p) + cut(p, r);
}

int main() {
    cin >> n >> l;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    arr[n + 1] = l;
    cout << cut(0, n + 1) << endl;
}