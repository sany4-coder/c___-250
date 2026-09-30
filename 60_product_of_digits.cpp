#include <iostream>
using namespace std;
int main() {
    int n, prod = 1;
    cout << "Enter a number: ";
    cin >> n;
    while (n != 0) {
        prod *= n % 10;
        n /= 10;
    }
    cout << "Product of digits = " << prod;
    return 0;
}
