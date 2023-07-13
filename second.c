#include<stdio.h>
# define Mark 100 //Symbolic Constants
int main(){

  int a = 125;  //Assignment Operator
  int b = 125;
  // Arthematic Operator
//   printf("The Sum Of %d + %d is = %d\n",a,b,a+b);
//   printf("%d\n",a-b);
//   printf("%d\n",a*b);
//   printf("%d\n",a/b);
//   printf("%d",a%b);
 
  // Relational Operator
   printf("%d \n",a<=b);  // 0 = False , 1 = True
   printf("%d\n",a==b);

   //Logical Operators
    int result1 = (5 > 4) && (10>4);  //Returns true if both operands are true.
    printf("%d\n",result1);

 int result2 = (5 < 4) || (10>4);  //Returns true if atleast one operands are true.
    printf("%d\n",result2);


 int result3 =! (5 < 4);  //Returns the opposite of the operand's logical value.
    printf("%d\n",result3);


 //Shorthand Operators
 int new = 10;
 int old = 15;
//  new = new + old; //Old Method
 new *= old; //Shorthand Method
 printf("New Value IS:%d\n",new);


 // Unary Operators
 int darw = 10;
 darw++; //Adds Value By 1
 darw--; //Lessens Value By 1

     printf("%d",darw);
    
    return 0;
}