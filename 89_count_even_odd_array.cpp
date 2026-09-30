#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], even = 0, odd = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }
    cout << "Even count = " << even << ", Odd count = " << odd;
    return 0;
}
