#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0)
        cout << "Cannot divide by zero";
    else
        cout << "Remainder = " << a % b;
    return 0;
}
