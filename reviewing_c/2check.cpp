#include <stdio.h>
#include <math.h>

int main() {
    int principal = 1000;
    int rate = 5;    // can be an integer
    int time = 2;    // can be an integer

    // Convert one operand to a floating-point number to enable floating-point division
    double amount = principal * pow(1 + 5.0/ 100, time);

    printf("Amount: %.2f\n", amount);

    return 0;
}
