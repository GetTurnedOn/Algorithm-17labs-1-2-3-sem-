//#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 
int main(int argc, char *argv[])
{
    float x,y,z,r,f;
 
        printf("Enter radius of the sphere:\n");
        scanf("%f", &r); // считываем радиус сферы
        printf("Enter x:\n");
        scanf("%f", &x); // считываем абсциссу точки
        printf("Enter y:\n");
        scanf("%f", &y); // считываем ординату точки
        f = pow(0-x,2)+pow(0-y,2); // x^2 + y^2
        if ( f<= pow(r,2)) /*по теореме пифагора проверяем чтобы сумма квадратов координат точки была меньше радиуса в квадрате  */
printf("The point lies inside the sphere\n");
    else  printf("The point doesn't lie inside the sphere\n");
 
    system("PAUSE");
}