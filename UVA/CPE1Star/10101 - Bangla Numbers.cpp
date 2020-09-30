#include <bits/stdc++.h>
using namespace std;

long long n;
int a[4] = {10000000, 100000, 1000, 100};
string s[4] = {"kuti",
               "lakh",
               "hajar",
               "shata"};
string cut(long long n) {
    if (n < 100)
        return (n == 0 ? "" : to_string(n));

    for (int i = 0; i < 4; i++)
        if (n / a[i] != 0)
            return cut(n / a[i]) + (n / a[i] == 0 ? "" : " ") +
                   s[i] + (n % a[i] == 0 ? "" : " ") + cut(n % a[i]);
}

int main() {
    int c = 1;
    while (cin >> n) {
        cout << setw(4) << c << ". " << (n == 0 ? "0" : cut(n)) << '\n';
        c++;
    }
}