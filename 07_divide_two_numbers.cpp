#include <iostream>
using namespace std;
int main() {
    float a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0)
        cout << "Cannot divide by zero";
    else
        cout << "Quotient = " << a / b;
    return 0;
}
