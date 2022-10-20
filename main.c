#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y;
    printf("Enter X:");
    scanf("%lf", &x);
     if(x>=-100 && x<-50)
       y = -x;
     else if(x>=50 && x<100)
       y = x;
     else if(x>=200 && x<1000)
       y = log10(x)+1;
     else
       y=0;

    system("cls");
    printf("x=%.2lf\n",x);
    printf("y=%.2lf",y);

    return 0;
}
