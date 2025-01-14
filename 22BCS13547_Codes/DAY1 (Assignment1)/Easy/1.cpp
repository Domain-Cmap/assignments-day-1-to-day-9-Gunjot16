#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            count++;
            n /= 10;
        }
    }

    cout << "The number of digits is: " << count << endl;
    return 0;
}
