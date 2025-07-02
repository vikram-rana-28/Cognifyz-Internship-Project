#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string source, destination, line;

    cout << "Enter source file name: ";
    cin >> source;
    cout << "Enter destination file name: ";
    cin >> destination;

    ifstream fin(source);
    ofstream fout(destination);

    if (!fin || !fout) {
        cout << "File error!";
        return 1;
    }

    while (getline(fin, line)) {
        fout << line << endl;
    }

    cout << "File copied successfully.\n";
    fin.close();
    fout.close();
    return 0;
}
