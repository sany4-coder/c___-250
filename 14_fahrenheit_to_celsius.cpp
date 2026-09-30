#include <iostream>
using namespace std;
int main() {
    float f;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    cout << "Celsius = " << (f - 32) * 5 / 9;
    return 0;
}
