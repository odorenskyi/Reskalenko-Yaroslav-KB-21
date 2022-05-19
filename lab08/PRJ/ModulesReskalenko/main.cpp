#include <cmath>
#include <math.h>
#include <iostream>

float s_calculation(float x, float y, float z){
    float S,p;
     p = 3.14;
     S = pow(x,2)-pow(y,3)+sqrt(pow(y,x)-p);
    return S;

}
