#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    int mn = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < mn) mn = arr[i];
    cout << "Minimum = " << mn;
    return 0;
}
