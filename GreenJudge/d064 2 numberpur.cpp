#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
bool cmp(string a, string b) {
    for (int i = 0; i < min(a.size(), b.size()); i++)
        if (a[i] != b[i])
            return a[i] > b[i];
    if (a.size() > b.size()) {
        string t = b + b;
        for (int i = b.size() - 1; i < t.size(); i++)
            if (a[i] != t[i])
                return a[i] > t[i];
    } else if (b.size() > a.size()) {
        string t = a + a;
        for (int i = a.size() - 1; i < t.size(); i++)
            if (b[i] != t[i])
                return b[i] < t[i];
    }
    return false;
}
int main() {
    string a[10];
    for (int i = 0; i < 3; i++)
        cin >> a[i];
    sort(a, a + 3, cmp);
    for (int i = 0; i < 3; i++)
        cout << a[i];
}