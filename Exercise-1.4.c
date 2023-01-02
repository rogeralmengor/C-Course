#include <stdio.h>

int main() 
{
    float fahr, celsius; 
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */ 
    
    printf("Celsius to Fahrenheit conversion:\n"); 
    printf("---------------------------------\n");

    celsius = lower; 
    
    while (celsius <= upper) {
        fahr = ((9.0 / 5) * (celsius)) + 32.0; 
        printf("%3.1f\t%6.0f\n", celsius, fahr); 
        celsius = celsius + step; 
    }

    return 0; 
}
