#include<stdio.h>

int main()
{

// char a[] = {'a','b','c','d','f','f','f','f','d','f','f','f','d','f','d'};

//   for (int i = 0; a[i]!='\0'; i++)
//   {
//    printf("%c\n",a[i]);
//   }



//MultiLine String

char name[50];


printf("Enter Your Name:-");

// gets(name);  //Old
fgets(name,50,stdin);  //New
// printf("Your Name is:-");
puts(name);
fputs(name,stdout);
// scanf("%s",&name);
// printf("Your Name Is:%s",name);


    return 0;
}