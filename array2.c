
   #include <stdio.h>

int main() {
 //2D array Print
     int table1[3][3],i,j;
      
      for ( i = 0; i < 3; i++)
      {
        for ( j = 0; j < 3; j++)
        {
            printf("Enter Array Value[%d] x [%d]",i,j);
            scanf("%d",&table1[i][j]);
        }
        
      }
      
     //2D array Print
      
      for (int i = 0; i < 3; i++)
      {
        for (int j = 0; j < 3; j++)
        {
            printf("The Array is[%d] x [%d] = %d\n",i,j,table1[i][j]);
        }
        
      }

   return 0;
}


