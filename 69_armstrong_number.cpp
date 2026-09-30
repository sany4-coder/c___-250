#include <iostream>
using namespace std;
int main() {
    int n, temp, digits = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        int p = 1;
        for (int i = 0; i < digits; i++) p *= d;
        sum += p;
        temp /= 10;
    }
    if (sum == n) cout << "Armstrong number";
    else cout << "Not an Armstrong number";
    return 0;
}
