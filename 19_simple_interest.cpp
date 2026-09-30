#include <iostream>
using namespace std;
int main() {
    float p, r, t;
    cout << "Enter principal, rate, time: ";
    cin >> p >> r >> t;
    cout << "Simple Interest = " << (p * r * t) / 100;
    return 0;
}
