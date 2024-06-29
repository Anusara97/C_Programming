#include <stdio.h>
#include <math.h>

const double PI = 3.14;

int main(){
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);

    double area = 2.0*PI*r;
    printf("The area is: %.3f\n", area);

    return 0;
}
