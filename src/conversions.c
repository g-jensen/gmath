#ifndef _G_CONSTANTS_H_
#include "../headers/constants.h"
#endif

double radians(double degrees) {
    return degrees * (G_PI / 180.0);
}

double degrees(double radians) {
    return radians * (180.0 / G_PI);
}
