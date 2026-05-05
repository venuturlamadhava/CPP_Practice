#include <iostream>
#include "basic_functions.h"
#include "recursion.h"
#include "pass_by_ref.h"

using namespace std;

int main() {
    // Test raiseToPower
    cout << "3^4 = " << raiseToPower(3, 4) << endl;
    cout << "6^5 = " << raiseToPower(6, 5) << endl;

    // Test squareRoot
    cout << "sqrt(16) = " << squareRoot(16) << endl;

    // Test fibonacci
    cout << "fibonacci(5) = " << fibonacci(5) << endl;

    // Test swap
    int a = 3, b = 5;
    swap(a, b);
    cout << "After swap: a=" << a << " b=" << b << endl;

    // Test divide
    int remainder;
    int result = divide(14, 4, remainder);
    cout << "14/4 = " << result << " remainder " << remainder << endl;

    return 0;
}