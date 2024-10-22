#include <stdio.h>

int main()
{
    float r, h;
    printf("Enter the value of r\n");
    scanf("%f", &r);
    printf("Enter the value of h\n");
    scanf("%f", &h);
    printf("The value of volume of a cylinder is %.2f", 3.14 * r * r * h);
    return 0;
}