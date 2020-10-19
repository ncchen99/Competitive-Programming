#include <bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 5;
int main() {
    deque<int> maxd, mind;
    int n, L, maxA = 0;
    int seg[maxn] = {0};
    cin >> n >> L;
    for (int i = 0; i < n; i++) cin >> seg[i];
    mind.push_back(0);
    maxd.push_back(0);
    for (int i = 1; i < n; i++) {
        while (!mind.empty() && seg[mind.back()] > seg[i])
            mind.pop_back();
        mind.push_back(i);
        while (!maxd.empty() && seg[maxd.back()] < seg[i])
            maxd.pop_back();
        maxd.push_back(i);
        while (maxd.front() <= i - L)
            maxd.pop_front();
        while (mind.front() <= i - L)
            mind.pop_front();

        //cout << seg[maxd[0] - mind[0]] << " " << maxd[0] << " " << mind[0] << endl;
        maxA = max(maxA, seg[maxd.front()] - seg[mind.front()]);
    }
    cout << maxA << '\n';
}