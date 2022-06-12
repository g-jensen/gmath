#include "../headers/log.h"

double dln(double x) {
    double output = 0;
    for (int n = 1; n < g_log_depth; n++) {
        double t = (x-1)/(x+1);
        unsigned int k = (2 * n) - 1;
        output += dpow(t,k) / k;
    }
    return output * 2;
}

double dlog10(double x) {
    return dln(x) / G_LN10;
}
