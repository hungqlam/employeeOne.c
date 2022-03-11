#include<stdio.h>
#include<stdbool.h>
#include<time.h>  
#include<stdlib.h>
#define GRID_SIZE 3
void printArray(int arr[GRID_SIZE][GRID_SIZE]);
bool isLoShuMagicSquare( int[GRID_SIZE][GRID_SIZE]);
int sumOfEachRow( int[GRID_SIZE][GRID_SIZE]);
int sumOfEachColumn( int[GRID_SIZE][GRID_SIZE]);
int sumOfDiagonalTopLeftToRight( int[GRID_SIZE][GRID_SIZE]);
int sumOfDiagonalTopRightToLeft( int[GRID_SIZE][GRID_SIZE]);





int main(){      
   
//int arr[GRID_SIZE][GRID_SIZE]={{4,9,2},{3,5,7},{8,1,6}};     
int arr[GRID_SIZE][GRID_SIZE]={{1,2,3},{4,5,6},{7,8,9}};
printArray(arr);
bool check = false;
int  square[GRID_SIZE][GRID_SIZE];
int count= 0;

check=isLoShuMagicSquare(arr);
if(check)
{
   printf("\n This is LoShuMagicSquare");
}
else
   {
      while (!check)
       {        
           count++;
           int used[10] = {0};
           srand(time(0)+count); // Changing seed , so that we get new values each time
           for (int i = 0; i < 3; i++)
           {
               for (int j = 0; j < 3; j++)
               {
                   int n = rand()%9 + 1;
                   while (used[n])
                   {
                       n = rand()%9 + 1;
                   }
                   square[i][j] = n;
                   used[n] = 1;
               }
           }
      if(isLoShuMagicSquare(square)==1){
            check = 1;
        }
   }
   printf("\n");
   printArray(square);
   printf("No. of squares generated : %d \n",count);
   }
return 0;
   
}  

void printArray(int arr[3][3])
{
   for(int i=0; i<3; i++) {
       // inner loop for column
       for(int j=0; j<3; j++) {
         printf("%d ", arr[i][j]);
       }
       printf("\n"); // new line
     }
}

int sumOfEachRow( int array[GRID_SIZE][GRID_SIZE])
{
   int total;
   for(int row = 0; row < GRID_SIZE; row++)
    {
        total = 0;
        for(int column = 0; column < GRID_SIZE; column++)
            total += array[row][column];

        
    }
    return total;

}
int sumOfEachColumn( int array[GRID_SIZE][GRID_SIZE])
{
    int total;
    for(int columns = 0; columns < GRID_SIZE; columns++)
    {
        total = 0;
        for (int row = 0; row < GRID_SIZE; row++)
            total += array[row][columns];

       
    }
    return total;
}

int sumOfDiagonalTopLeftToRight( int array[GRID_SIZE][GRID_SIZE])
{
    int total = 0;

    // [x][][]   [0][0]
    // [][x][]   [1][1]
    // [][][x]   [2][2]
    
    for(int i = 0; i < GRID_SIZE; i++)
        total += array[i][i];
    
    

    return total;
}
int sumOfDiagonalTopRightToLeft( int array[GRID_SIZE][GRID_SIZE])
{
    int total = 0;

    
    // OR
    
    // [][][x]   [0][2]
    // [][x][]   [1][1]
    // [x][][]   [2][0]

    int column = (GRID_SIZE - 1); // 3 - 1 = 2
    for (int row = 0; row < GRID_SIZE; row++)
    {
        total += array[row][column];
        column--;
    }

    

    return total;
}

bool isLoShuMagicSquare( int array[GRID_SIZE][GRID_SIZE])
{
    
        if (sumOfEachRow(array)== 15 && sumOfEachColumn(array)== 15 &&sumOfDiagonalTopLeftToRight(array)  == 15 &&sumOfDiagonalTopRightToLeft(array)  == 15)
         
            return true;   
    else
        return false;
}

