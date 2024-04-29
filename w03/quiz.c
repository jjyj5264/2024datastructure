#include <stdio.h>
#include <stdlib.h>

int main() {
    // double* p1;
    // p1 = (int*)malloc(sizeof(double));
    // p1 = 23.92;

    double* p1;
    p1 = (double*)malloc(sizeof(double));
    *p1= 23; // Not the adress. The actual value.

    printf("The actual value of *p1 is: %f\n", *p1);
    // ...

    free(p1);
}