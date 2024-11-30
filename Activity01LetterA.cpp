#include <iostream>
using namespace std;

int main() {
    int rows = 8;

    // Outer loop
    for (int i = 0; i < rows; i++) {
    // Add a space for rows
    if (i % 2 == 0) {
       cout << " ";
    }
    // Inner loop
    for (int j = 0; j < 4; j++) {
        cout << "# * ";
    }
        cout << endl;
    }
    return 0;
}
