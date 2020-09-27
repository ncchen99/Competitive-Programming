#include <bits/stdc++.h>
using namespace std;
#define int long long
#define all(a) a.begin(), a.end()
#define pb push_back

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) cin >> arr[i];
    set<int> st(all(arr));
    int idx = 0;
    for (auto it : st) {
        mp[it] = idx;
        idx++;
    }
    for (int i = 0; i < n; i++) cout << mp[arr[i]] << " ";
    cout << '\n';
}