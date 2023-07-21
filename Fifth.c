#include<stdio.h>
int main()
{
    int sw;
    int a =10;
    int b =20;
    printf("Enter A number:");
    scanf("%d",&sw);
   switch (sw)
   {
   case 1:
    printf(" The Sum Of %d + %d is = %d",a,b,a+b);
    break;
    case 2:
    printf("%d",a-b);
    break;
    case 3:
    printf("%d",a*b);
    break;
    case 4:
    printf("%d",a/b);
    break;
    case 5:
    printf("%d",a%b);
    break;
   default:
   printf("Incorrect Number");
    break;
   }

    return 0;
}