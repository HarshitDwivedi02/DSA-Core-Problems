#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    // for (int i = 1; i <= n; ++i) {
    //     sum += i;
    // }

    sum = n*(n+1)/2;

    cout << "Sum = " << sum;
    return 0;
}