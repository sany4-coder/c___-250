#include <iostream>
using namespace std;
int main() {
    int days;
    cout << "Enter days: ";
    cin >> days;
    int y = days / 365;
    int m = (days % 365) / 30;
    int d = (days % 365) % 30;
    cout << y << " years, " << m << " months, " << d << " days";
    return 0;
}
