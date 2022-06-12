#include <stdio.h>
#include "gmath.h"

int main () {
    printf("G_PI = %f\n",G_PI);
    printf("G_E = %f\n",G_E);
    printf("iabs(5) = %d\n",iabs(5));
    printf("iabs(-5) = %d\n",iabs(-5));
    printf("iabs(0) = %d\n",iabs(0));
    printf("floor(5.5) = %f\n",floor(5.5));
    printf("ceil(5.5) = %f\n",ceil(5.5));
    printf("ipow(5,2) = %d\n",ipow(5,2));
    printf("dpow(5.5,2) = %f\n",dpow(5.5,2));
    printf("factorial(5) = %d\n",factorial(5));
    printf("dln(G_E) = %f\n",dln(G_E));
    printf("dln(2) = %f\n",dln(2));
    printf("dlog10(100) = %f\n",dlog10(100));
    printf("dlog10(53) = %f\n",dlog10(53));
    printf("exp(2) = %f\n",exp(2));
    printf("fsqrt(4) = %f\n",fsqrt(4.f));
    printf("fsqrt(2) = %f\n",fsqrt(2.f));
    printf("pythag(3,4) = %f\n",pythag(3,4));
    printf("pythag(2,2) = %f\n",pythag(2,2));
    printf("imin(1,2) = %d\n",imin(1,2));
    printf("dmax(1,2) = %f\n",dmax(1,2));
    printf("radians(180) = %f\n",radians(180));
    printf("degrees(G_PI) = %f\n",degrees(G_PI));
}
