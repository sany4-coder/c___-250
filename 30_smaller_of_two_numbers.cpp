#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a < b) cout << a << " is smaller";
    else if (b < a) cout << b << " is smaller";
    else cout << "Both are equal";
    return 0;
}
