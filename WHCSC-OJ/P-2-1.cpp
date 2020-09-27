#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6;
int arr[maxn];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int dn = 0;
    for (int i = 0; i < n; i++) {
        if (!(arr[i] == arr[i - 1]))
            dn++;
    }
    cout << dn << '\n';
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[i - 1])
            cout << arr[i] << ' ';
    }
}