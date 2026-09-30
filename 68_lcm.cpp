#include <iostream>
using namespace std;
int main() {
    int a, b, x, y;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    x = a;
    y = b;
    while (y != 0) {
        int t = y;
        y = x % y;
        x = t;
    }
    cout << "LCM = " << (a * b) / x;
    return 0;
}
