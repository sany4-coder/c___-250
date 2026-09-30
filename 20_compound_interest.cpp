#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float p, r, t;
    cout << "Enter principal, rate, time: ";
    cin >> p >> r >> t;
    float amount = p * pow(1 + r / 100, t);
    cout << "Compound Interest = " << amount - p;
    return 0;
}
