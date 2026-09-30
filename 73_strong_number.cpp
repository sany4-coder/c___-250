#include <iostream>
using namespace std;
int main() {
    int n, temp, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    while (temp != 0) {
        int d = temp % 10;
        int f = 1;
        for (int i = 1; i <= d; i++) f *= i;
        sum += f;
        temp /= 10;
    }
    if (sum == n) cout << "Strong number";
    else cout << "Not a strong number";
    return 0;
}
