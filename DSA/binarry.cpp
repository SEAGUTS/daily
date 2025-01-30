#include <iostream>
using namespace std;

bool isBinary(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isBinary(number)) {
        cout << number << " is a binary number." << endl;
    } else {
        cout << number << " is not a binary number." << endl;
    }

    return 0;
}