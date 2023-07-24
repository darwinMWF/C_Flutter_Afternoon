
#include <stdio.h>

int main()
{

    // Single Array
    int mark[] = {
        12,
        12,
        23,
        32,
        43,
        23,
        32,
        32,
        2,
        43,
        343,
        43,
        34,
        33,
        3,
        3,
    };                               // Undefined Array
    int mark1[4] = {12, 12, 23, 32}; // Defined Array
    printf("%d", mark[10]);

    // 2D Array
    int table[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("%d", table[2][2]);

    // 3D Array
    int test[2][3][4] = {
        {{3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2}},
        {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};

    // Single Array Print
    int mark1[4] = {12, 12, 23, 32};

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", mark1[i]);
    }

    // 2D array Print
    int table1[3][3] = {{1, 2, 3}, {4, 5, 6}, {12, 54, 32}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("The Array is[%d] x [%d] = %d\n", i, j, table1[i][j]);
        }
    }
    // 3D array Print
    int test1[2][3][4] = {
        {{3, 4, 2, 3}, {0, 3, 9, 11}, {23, 12, 23, 2}},
        {{13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("The array is [%d] x [%d]  x [%d] = %d\n", i, j, k, test1[i][j][k]);
            }
        }
    }

    return 0;
}
