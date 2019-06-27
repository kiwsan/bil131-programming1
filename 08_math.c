// Math

#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    
    //sin works on radian, we need to convert to degree.
    printf("sin(30) = %f\n", sin(30*(PI / 180)));
    printf("cos(55) = %f\n", cos(30*(PI / 180)));
    printf("tan(45) = %f\n", tan(30*(PI / 180)));

    //e to the power of 2
    printf("e^2 = %f\n", exp(2));

    //3 power to the power 5
    printf("pow(3, 5) = %f\n", pow(3, 5));

    //square root
    printf("sqrt(100) = %f\n", sqrt(100));

    //smallest integer bigger then PI
    printf("ceil(PI) = %f\n", floor(PI));

    //largest integer less then PI
    printf("floor(PI) = %f\n", floor(PI));

    //absolute value
    printf("abs(-3) = %f\n", abs(-3));
}