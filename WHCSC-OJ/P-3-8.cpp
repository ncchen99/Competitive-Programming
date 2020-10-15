#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
int main() {
    deque<int> maxd, mind;
    int seg[maxn], n, L;
    cin >> n >> L;
    for (int i = 0; i < n; i++) cin >> seg[i];
    for (int l = 0, r = L; r < n; l++, r++) {
        while (mind.back() > seg[i])
            mind.pop_back();
        mind.push_back(seg[i]);
        while (maxd.back() < seg[i])
            mind.pop_back();
        mind.push_back(seg[i]);
    }
}