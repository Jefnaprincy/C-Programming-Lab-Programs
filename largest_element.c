#include <stdio.h>
And large (int n, int arr[])
for(int i=0;i<n;i++)
{
  for (int j=i+1;j<n;j++)
  {
   if(arr[i]<arr[j])
    {
     int temp-arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
    }
   }
}
return arr[n-1];
}
int main()
{
int n;
printf("Enter the size of array: ");
scanf("%d",&n);
int arr[n];
printf("\nEnter the elements of array: ");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
int res=large(n,arr);
printf("\nThe largest number is:%d",res);
return 0;
} 