#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    // Input from user
    cout << "Enter a string: ";
    getline(cin, input);  // allows spaces

    // Reversing the string using loop
    string reversed = "";
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }

    // Output
    cout << "Reversed string: " << reversed << endl;

    return 0;
}
