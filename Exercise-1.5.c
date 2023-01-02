#include <stdio.h>

int main() 
{
    float fahr, celsius; 
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */ 
    
    printf("Fahrenheit to Celsius conversion:\n"); 
    printf("---------------------------------\n");

    fahr = upper; 

    for (fahr = 0; fahr == lower; fahr = fahr + step)
    {
        celsius = (celsius * 1.8) + 32; 
        printf("%3.1f %6.1f\n", fahr, celsius);
    }

    return 0; 
}
