#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], sum = 0;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << "Sum = " << sum;
    return 0;
}
