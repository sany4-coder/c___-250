#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    for (int n = start; n <= end; n++) {
        int temp = n, digits = 0, sum = 0;
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
        if (sum == n) cout << n << " ";
    }
    return 0;
}
