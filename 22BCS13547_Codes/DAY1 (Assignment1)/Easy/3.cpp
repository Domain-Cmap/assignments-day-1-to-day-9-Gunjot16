#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int largestDigit = 0;

    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit > largestDigit) {
            largestDigit = currentDigit;
        }
        n /= 10;
    }

    cout << largestDigit << endl;
    return 0;
}
