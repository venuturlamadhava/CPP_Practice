#include "basic_functions.h"

int raiseToPower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

double squareRoot(double num) {
    double low = 1.0, high = num, estimate = 0;
    for (int i = 0; i < 30; i++) {
        estimate = (high + low) / 2;
        if (estimate * estimate > num) high = estimate;
        else low = estimate;
    }
    return estimate;
}

int divide(int numerator, int denominator, int &remainder) {
    remainder = numerator % denominator;
    return numerator / denominator;
}