#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 1;
int arr[maxn];
int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int l, r;
        if (n % 2) {
            cout << arr[n / 2] << ' ';
            for (l = n / 2; 1; l--)
                if (arr[l] != arr[l - 1])
                    break;
            for (r = l; 1; r++)
                if (arr[r] != arr[r + 1]) break;
            cout << r - l + 1 << ' ';
            cout << 1;
        } else {
            cout << arr[n / 2 - 1] << ' ';
            for (l = n / 2 - 1; 1; l--)
                if (arr[l] != arr[l - 1])
                    break;
            for (r = n / 2; 1; r++)
                if (arr[r] != arr[r + 1]) break;
            cout << r - l + (r == n ? 0 : 1) << ' ';
            cout << arr[n / 2] - arr[n / 2 - 1] + 1;
        }
        cout << '\n';
    }
}