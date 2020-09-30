#include <bits/stdc++.h>
using namespace std;
int main() {
    string a, b;
    while (cin >> a >> b) {
        if (a[0] == '0' && b[0] == '0')
            return 0;
        int cp = 0, t = 0;  //carry operation , tmp
        if (a.size() < b.size()) swap(a, b);
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        for (int i = 0; i < b.size(); i++) {
            if ((a[i] - '0') + (b[i] - '0') + t > 9) {
                t = 1;
                cp++;
            } else
                t = 0;
        }
        for (int i = b.size(); i < a.size() && (a[i] - '0') + t > 9; i++)
            cp++;
        if (cp == 0)
            cout << "No carry operation.\n";
        else if (cp == 1)
            cout << "1 carry operation.\n";
        else
            cout << cp << " carry operations.\n";
    }
}