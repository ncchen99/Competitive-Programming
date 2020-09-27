#include <iostream>
using namespace std;

int width, idx;
string s;

int func(int w) {
    idx++;
    if (s[idx] == '0')
        return 0;
    else if (s[idx] == '1')
        return w * w;
    else {
        int ret = 0;
        for (int i = 0; i < 4; i++) {
            ret += func(w / 2);
        }
        return ret;
    }
}

int main() {
    cin >> s;
    cin >> width;
    idx = -1;
    cout << func(width) << "\n";
}