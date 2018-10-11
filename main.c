#include <stdio.h>
#include <stdlib.h>
#include "TempConvert.h"

int main()
{
    printf("Enter Temperature In Celsius: ");

    float tempC;
    scanf("%f", &tempC);

    float tempF;
    //tempF = convertTemperature(tempC);
    tempF = convertTemperature(tempC);


    printf("Temperature In Fahrenheit: %f", tempF);

    return 0;
}
