#include<stdio.h>
int Hello(char* s);   //Function Declaration
int sum(int x,int y);
int main()
{
  int a;
  int b;
  printf("Enter A number");
  scanf("%d",&a);
  scanf("%d",&b);
    // Hello("Atul");    //Function Calling
      sum(a,b);          //Call By Reference
      sum(45,12);     //Call By Value
    return 0;
}
int sum(int x,int y){
     printf("The Sum of %d + %d is=:%d",x,y,x+y);
}
int Hello(char* s){
   
   printf("Hello %s",s);      //Function Defination
}