#include <iostream>
using namespace std;
int main() {
    int n, count = 0;
    cout << "Enter N: ";
    cin >> n;
    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << i << " ";
            count++;
        }
    }
    cout << "\nTotal primes = " << count;
    return 0;
}
