#include <stdio.h>

GCD(int a, int b)

int small=(a>b)?a:b;

int gcd =1;

for(int i=2;i<=small;i++)

{

       if((a%i==0)&&(b%i==0))
     {

      if (i>gcd)

       gcd=i;

     }

}

return gcd;

}

int main()

{

int a,b;

printf("Enter the two numbers: ");

scanf("%d %d", &a, &b);

int res=GCD(a,b);

printf("\nThe GCD is: %d", res);

return 0;

}