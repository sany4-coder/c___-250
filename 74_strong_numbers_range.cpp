#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    for (int n = start; n <= end; n++) {
        int temp = n, sum = 0;
        while (temp != 0) {
            int d = temp % 10;
            int f = 1;
            for (int i = 1; i <= d; i++) f *= i;
            sum += f;
            temp /= 10;
        }
        if (sum == n) cout << n << " ";
    }
    return 0;
}
