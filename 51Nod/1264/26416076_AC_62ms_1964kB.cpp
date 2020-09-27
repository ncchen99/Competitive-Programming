#include <bits/stdc++.h>
using namespace std;
typedef complex<double> Vector;
#define x real()
#define y imag()
#define ll long long
Vector add(Vector a, Vector b) { return a + b; }
Vector sub(Vector a, Vector b) { return a - b; }
double dot(Vector a, Vector b) { return a.x * b.x + a.y * b.y; }
double cross(Vector a, Vector b) { return a.x * b.y - a.y * b.x; }

bool touch(Vector a1, Vector a2, Vector b1, Vector b2) {
    return (cross(a2 - a1, b1 - a1) * cross(a2 - a1, b2 - a1) <= 0 and
            cross(b2 - b1, a1 - b1) * cross(b2 - b1, a2 - b1) <= 0);
}
int main() {
    double x1, x2, x3, x4, y1, y2, y3, y4;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        if (touch({x1, y1}, {x2, y2}, {x3, y3}, {x4, y4})) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}