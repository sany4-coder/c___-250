#include <iostream>
using namespace std;
int main() {
    float m;
    cout << "Enter marks: ";
    cin >> m;
    if (m >= 80) cout << "Grade A+";
    else if (m >= 70) cout << "Grade A";
    else if (m >= 60) cout << "Grade B";
    else if (m >= 50) cout << "Grade C";
    else if (m >= 40) cout << "Grade D";
    else cout << "Grade F";
    return 0;
}
