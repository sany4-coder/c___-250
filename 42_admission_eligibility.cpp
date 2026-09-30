#include <iostream>
using namespace std;
int main() {
    float ssc, hsc;
    cout << "Enter SSC and HSC GPA: ";
    cin >> ssc >> hsc;
    if (ssc >= 3.5 && hsc >= 3.5) cout << "Eligible for admission";
    else cout << "Not eligible for admission";
    return 0;
}
