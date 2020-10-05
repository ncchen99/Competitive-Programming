#include <bits/stdc++.h>
using namespace std;
int main() {
    string f, s;  //first, second
    while (getline(cin, f)) {
        getline(cin, s);
        int fl[256] = {0}, sl[256] = {0};
        for (int i = 0; i < f.size(); i++)
            fl[f[i]]++;
        for (int i = 0; i < s.size(); i++)
            sl[s[i]]++;
        for (int i = 'a'; i <= 'z'; i++)
            if (fl[i] > 0 && sl[i] > 0)
                for (int j = 0; j < min(fl[i], sl[i]); j++)
                    cout << (char)i;
        cout << '\n';
    }
}
