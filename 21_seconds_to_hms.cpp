#include <iostream>
using namespace std;
int main() {
    int sec;
    cout << "Enter seconds: ";
    cin >> sec;
    int h = sec / 3600;
    int m = (sec % 3600) / 60;
    int s = sec % 60;
    cout << h << " hours, " << m << " minutes, " << s << " seconds";
    return 0;
}
