#include "../headers/abs.h"

double dabs(double n) {
    return n < 0 ? -n : n;
}

int iabs(int n) {
    return n < 0 ? -n : n;
}
