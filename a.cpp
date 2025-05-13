#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Check if 5*n*n + 4 or 5*n*n - 4 is a perfect square
    int x = 5 * n * n + 4;
    int y = 5 * n * n - 4;

    int sx = sqrt(x);
    int sy = sqrt(y);

    if (sx * sx == x || sy * sy == y) {
        cout << n << " is a Fibonacci number." << endl;
    } else {
        cout << n << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}
