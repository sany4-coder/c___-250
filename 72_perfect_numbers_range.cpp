#include <iostream>
using namespace std;
int main() {
    int start, end;
    cout << "Enter range (start end): ";
    cin >> start >> end;
    for (int n = start; n <= end; n++) {
        int sum = 0;
        for (int i = 1; i < n; i++)
            if (n % i == 0) sum += i;
        if (sum == n && n > 0) cout << n << " ";
    }
    return 0;
}
