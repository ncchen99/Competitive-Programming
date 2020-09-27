#include <bits/stdc++.h>
using namespace std;
const int inf = 1e7 + 5;
int main() {
    int n;
    long long total = 0;
    cin >> n;
    int q[n + 1];
    stack<int> st;
    q[0] = inf;
    st.push(0);
    for (int i = 1; i <= n; i++) cin >> q[i];
    for (int i = 1; i <= n; i++) {
        while (q[st.top()] <= q[i]) st.pop();
        total += i - st.top();
        st.push(i);
    }
    cout << total << endl;
}