#include <stdio.h>

int main() 
{
    float fahr; 

    printf("Fahrenheit to Celsius conversion:\n"); 
    printf("---------------------------------\n");

    for (fahr = 300; fahr <= 0; fahr = fahr - 20)
    {
        printf("%3.1f %6.1f\n", fahr, ((fahr -32) *5) /9);
    }

    return 0; 
}
