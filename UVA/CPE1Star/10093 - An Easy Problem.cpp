#include <bits/stdc++.h>
using namespace std;
int main() {
    char a;
    while (cin >> a) {
        if (isdigit(a))
            cout << a - '0' + 1 << '\n';
        if (isalpha(a) && isupper(a))
            cout << a - 'A' + 11 << '\n';
        if (isalpha(a) && islower(a))
            cout << a - 'a' + 37 << '\n';
    }
}