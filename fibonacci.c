#include <stdio.h>>
void fibo (int n, int fl,int f2)
{
int sum=0;
printf("%d %d",f1, f2);
for (int i=2;i<n;i++)
{ 
printf(" %d",sum);
sum=f1+f2;
f1=f2;
f2=sum;
}
}
int main()
{
int n;
printf("Enter the number: ");
scanf("%d",&n);
int f1, f2;
printf("\nEnter f1 and f2:");
scanf("%d %d",&f1, f2);
fibo (n, f1, f2);
return 0;
}