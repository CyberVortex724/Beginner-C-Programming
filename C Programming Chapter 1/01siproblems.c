#include <stdio.h>

int main()
{
    float p, t, r;
    printf("Enter the value of p\n");
    scanf("%f", &p);
    printf("Enter the value of t\n");
    scanf("%f", &t);
    printf("Enter the value of r\n");
    scanf("%f", &r);
    printf("the value of si gained over %.2f years on rs.%.2f at %.2f rate is %.2f", t, p, r, (p * t * r) / 100);

    return 0;
}