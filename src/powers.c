#include "../headers/powers.h"

int ipow(int a, unsigned int b) {
    int output = 1;
    for (unsigned int i = 0; i < b; i++) {
        output *= a;
    }
    return output;
}

double dpow(double a, unsigned int b) {
    double output = 1;
    for (unsigned int i = 0; i < b; i++) {
        output *= a;
    }
    return output;
}

int factorial(unsigned int x) {
    int output = 1;
    while (x > 1) {
        output *= x;
        x--;
    }
    return output;
} 

double exp(double x) {
   double sum = 1;
   for (int n = 1; n < exp_iters; n++) {
       sum += dpow(x,n) / factorial(n); 
   }
   return sum;
}

// VERY slow
float fsqrt(float x) {
    return x == 0 ? 0 : exp( 0.5 * dln(x) );
}
