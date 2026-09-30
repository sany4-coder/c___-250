#include <iostream>
using namespace std;
int main() {
    float basic;
    cout << "Enter basic salary: ";
    cin >> basic;
    float hra = basic * 0.20;
    float da = basic * 0.40;
    cout << "Gross Salary = " << basic + hra + da;
    return 0;
}
