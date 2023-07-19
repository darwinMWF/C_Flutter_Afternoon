#include <stdio.h>
int main()
{

    //  Single Line Comment
    /*
      Multiline Comment
    */
    // For Loop

    for (int i = 1; i <= 10; i++)
    {
        if (i==5)
        {
            printf("Five Was Here\n");
           continue; //Jumping Statements
            break;
        }
        else
       printf("%d\n",i);
    }

    // while Loop
    int i = 2;
    while (i < 20)
    {
        printf("Hello\n");
        i++;
    }

    // Do While Loop
    do
    {
       printf("Hello World\n");
        i++;
    } while (i>10);
    

    return 0;
}