#include <stdio.h>

int cel(int f)

{

int celsius=(f-32)/1.8;

return celsius;

}

int main()
{

int f;

printf("Enter the temperature: ");

scanf("%d",&f);

float res=cel(f);
printf("\nTemperature in celsius: %.2f", res);

return 0;

}