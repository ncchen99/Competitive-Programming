#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    //fstream cin(to_string(j) + ".in", std::ios_base::in);
    cin >> n;
    int song[n];
    //ofstream cout(to_string(j) + ".out");
    for (int i = 0; i < n; i++) {
        cin >> song[i];
    }
    for (int i = 3; i < n; i++) {
        if (abs(song[i] - song[i - 1]) > 5) {
            int tmp[3] = {song[i - 3], song[i - 2], song[i - 1]};
            sort(tmp, tmp + 3);
            song[i] = tmp[1];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << song[i] << (i == n - 1 ? '\n' : ' ');
    }
}