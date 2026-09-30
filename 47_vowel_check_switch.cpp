#include <iostream>
using namespace std;
int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    switch (c) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel"; break;
        default: cout << "Not a vowel";
    }
    return 0;
}
