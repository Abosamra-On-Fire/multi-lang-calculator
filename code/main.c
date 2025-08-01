#include <stdio.h>

extern int add(int a, int b);
extern int subtract(int a, int b);
extern int multiply(int a, int b);
extern int divide(int a, int b);
extern int modulo(int a, int b);

int main() {
    printf("a = 10, b = 5\n");
    printf("Addition (C): %d\n", add(10, 5));
    printf("Subtraction (fortran): %d\n", subtract(10, 5));
    printf("Multiplication (Go): %d\n", multiply(10, 5));
    printf("Division (ASM): %d\n", divide(10, 5));
    printf("Modulo (C++): %d\n", modulo(10, 3));
    return 0;
}