#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
const int maxn = 27;
const ll mod = 10e10 + 9;
ll n, p, num[maxn], mind = mod, cp = 0;  //close p ,min diff
void rec(int i, ll np) {                 //np : now p
    if (i == n) {
        if (np <= p && p - np < mind) {
            mind = p - np;
            cp = np;
        }
        return;
    }
    //cout << i << " " << np << endl;
    rec(i + 1, np + num[i]);
    rec(i + 1, np);
    return;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> p;
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
    rec(0, 0);
    cout << cp << endl;
}