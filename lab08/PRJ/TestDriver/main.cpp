#include <iostream>
#include <math.h>
#include "moduleReskalenko.h"

using namespace std;

int main()
{
    system("chcp 1251 && cls");
    float x[5] = {4, 10, 7, 2, 4};
    float y[5] = {2,  3, 2, 7, 3};
    float p[1] = {3.14};
    float result[5] = {11.5861, 315.994, 52.1741, -332.228, -2.17617};
    float SS;
    for(int i = 0; i<5; i++){
        SS = (floor(s_calculation(x[i], y[i], p[i]) * 1000))/1000;
        if (SS == result[i]){
            cout << "TestCase #" << i+1 << " passed" << endl;
        }
        else cout << "TestCase #" << i+1 << " falled" << endl;
    }


}
