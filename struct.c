#include <stdio.h>
#include <string.h>
typedef struct EngeenireengOfInformatrionTechnologe
{
    char name[50]; // Structure Syntax
    int age;
    long int Mobile_no;
    int salary;
} IT; // Alias

int main()
{
int i;
    IT em[2];
    // strcpy(em[0].name, "Chirag");
    // em[0].age = 21;
    // em[0].Mobile_no = 1234567890;
    // em[0].salary = 50000;

    // strcpy(em[1].name, "Atul");
    // em[1].age = 19;
    // em[1].Mobile_no = 1234567891;
    // em[1].salary = 50000;

    //     printf("Your Name IS:%s\n", em[0].name);
    //     printf("%d\n", em[0].age);
    //     printf("%d\n", em[0].Mobile_no);
    //     printf("%d\n", em[0].salary);
    //   printf("New Employee\n\t\n");
    //     printf("Your Name IS:%s\n", em[1].name);
    //     printf("%d\n", em[1].age);
    //     printf("%d\n", em[1].Mobile_no);
    //     printf("%d\n", em[1].salary);

    for (int i = 0; i < 2; i++)
    {
        printf("Enter Your Name\n");
        scanf("%s", &em[i].name);
        printf("Enter Your Age\n");
        scanf("%d", &em[i].age);
        printf("Enter Your Mobile No\n");
        scanf("%d", &em[i].Mobile_no);
        printf("Enter Your Salary\n");
        scanf("%d", &em[i].salary);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("Your Name Is:%s\n", em[i].name);
        printf("Your Age Is:%d\n", em[i].age);
        printf("Your Mobile No Is:%d\n", em[i].Mobile_no);
        printf("Your Salary Is:%d\n", em[i].salary);
    }

    return 0;
}
