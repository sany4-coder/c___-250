#include <iostream>
using namespace std;
int main() {
    float m1, m2, m3, m4, m5;
    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    float total = m1 + m2 + m3 + m4 + m5;
    cout << "Total = " << total << endl;
    cout << "Percentage = " << (total / 500) * 100 << "%";
    return 0;
}
