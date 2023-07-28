#include <stdio.h>
void swap(int *n1, int *n2);
int main()
{
    // int num = 10;
    //                           // declare an integer variable
    // int *ptr = &num;                          // assign the address of num to ptr
    // printf("Value of num: %d\n", num);        // output: 10
    // printf("Address of num: %p\n", &num);     // output: memory address of num
    // printf("Value stored in ptr: %p\n", ptr); // output: memory address of num

    // Pointer And Functions

    int num1 = 5, num2 = 10;

    // address of num1 and num2 is passed
    swap(&num1, &num2);

    printf("num1 = %d\n", num1);
    printf("num2 = %d", num2);

    // pointer in Array

    int x[4];
    int i;

    for (i = 0; i < 4; ++i)
    {
        printf("&x[%d] = %p\n", i, &x[i]);
    }

    printf("Address of array x: %p", x);
  // Array And Pointer Ex2
    int x[5] = {1, 2, 3, 4, 5};
    int *ptr;

    // ptr is assigned the address of the third element
    ptr = &x[2];

    printf("*ptr = %d \n", *ptr);           // 3
    printf("*(ptr+1) = %d \n", *(ptr + 1)); // 4
    printf("*(ptr-1) = %d", *(ptr - 1));    // 2
  
    return 0;
}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
