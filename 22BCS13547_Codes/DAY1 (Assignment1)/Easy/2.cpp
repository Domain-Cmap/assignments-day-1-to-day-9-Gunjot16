#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int reversedNumber = 0;

    while (n > 0) {
        int lastDigit = n % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }

    cout << reversedNumber << endl;
    return 0;
}
