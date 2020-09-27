#include <bits/stdc++.h>
using namespace std;

int eval() {
    int val, x, y, z;
    string token;
    cin >> token;
    if (token[0] == 'f') {
        x = eval();
        return 2 * x - 3;
    } else if (token[0] == 'g') {
        x = eval();
        y = eval();
        return 2 * x + y - 7;
    } else if (token[0] == 'h') {
        x = eval();
        y = eval();
        z = eval();
        return 3 * x - 2 * y + z;

    } else {
        return stoi(token);
    }
}

int main() {
    cout << eval() << endl;
    return 0;
}