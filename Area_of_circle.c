

#include <stdio.h>

#define PI 3.14

int circle (int r)

int area=PI*r*r;

return area;

}

int main()

{

int r;

printf("Enter the value of radius: ");

scanf("%d",&r);

int res-circle(r);

printf("\nArea of circle: %d", res);

return 0;
}