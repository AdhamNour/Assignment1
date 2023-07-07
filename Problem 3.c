#include <stdio.h>

int main(int argc, char const *argv[])
{
    float degreeInCelsius = 0;
    printf("Please enter degree in degrees Celsius\n");
    scanf("%f", &degreeInCelsius);
    float degreeCelsiusCoeff = 5.0 / 9;
    float degreeCelsiusOffset = 32;
    float degreeFehrnheit = degreeInCelsius * degreeCelsiusCoeff + degreeCelsiusOffset;
    printf("Degree in fehrnheit: %.2f\n", degreeFehrnheit);
    return 0;
}
