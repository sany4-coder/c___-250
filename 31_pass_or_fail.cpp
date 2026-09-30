#include <iostream>
using namespace std;
int main() {
    float marks;
    cout << "Enter marks: ";
    cin >> marks;
    if (marks >= 40) cout << "Passed";
    else cout << "Failed";
    return 0;
}
