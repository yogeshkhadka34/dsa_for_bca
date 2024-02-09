// C program to calculate Compound Interest 
#include <stdio.h> 
  
// For using pow function we must 
// include math.h 
#include <math.h> 
  
// Driver code 
int main() 
{ 
    // Principal amount , rate and time
    double principal, rate,time;
  
     scanf("%lf", &principal);
     scanf("%lf", &rate);
     scanf("%lf", &time);
  
    // Calculating compound Interest 
    double amount = principal * ((pow((1 + rate / 100), time))); 
    double CI = amount - principal; 
  
    printf("Compound Interest is : %.2lf", CI); 
    return 0; 
}
