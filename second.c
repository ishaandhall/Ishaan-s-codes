//wap to convert fahrenheit to celsius
#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in fahrenheit:\n");
    scanf("%f",&f);
    c=((f-32)*5)/9;
    printf("Temperature in celsius is: %.2f\n",c);
    return 0;
}