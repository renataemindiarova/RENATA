#include <stdio.h>
#include <math.h>
 int main()
 {
     printf("Vvedi a:");
     double a;
           scanf("%lg",&a);
     printf("Vvedi b:");
     double b;

       scanf ("%lg",&b);
     if (a!=0)
     {
         double x=-b/a;
         printf(" 1 root,x=%lg\n  ",x);
     }
     if ((a==0)&&(b!=0))
     {
         printf(" no roots!\n");
     }
     if ((a==0)&&(b==0))
     {
         printf("infinitely many roots\n");
     }
     return 0;
 }
