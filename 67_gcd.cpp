#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    cout << "GCD = " << a;
    return 0;
}
