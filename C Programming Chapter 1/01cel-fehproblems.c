#include <stdio.h>

int main()
{
    float celcius, fahrenheit;
    printf("Enter the temperature in degree celcius\n");
    scanf("%f", &celcius);
    printf("The tempereture of %f degree celcius in fahrenheit scale is %f", celcius, ((9.0 / 5.0) * celcius) + 32);
    return 0;
}