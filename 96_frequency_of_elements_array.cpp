#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    bool counted[n] = {false};
    for (int i = 0; i < n; i++) {
        if (counted[i]) continue;
        int freq = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                freq++;
                counted[j] = true;
            }
        }
        cout << arr[i] << " occurs " << freq << " times" << endl;
    }
    return 0;
}
