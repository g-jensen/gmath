#include "../headers/round.h"

double floor(double n) {
    return n >= 0 ? (int)n : (int)n - 1;
}
double ceil(double n) {
    return n > 0 ? (int)n + 1 : (int)n;
}
