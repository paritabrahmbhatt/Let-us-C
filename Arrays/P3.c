//Write a program that reads 5x5 array of the integers and prints the row sum and column sum

#include <stdio.h>
 void main()
 {
     int a[5][5]={
         {8,3,9,0,10},
         {3,5,17,1,1},
         {2,8,6,23,1},
         {15,7,3,2,9},
         {6,14,2,6,0}
     };
     int i,j,x=0,y=0;
     int sum=0;

     for(i=0;i<5;i++){
         for(j=0;j<5;j++){
            sum += a[i][j];
        }
            printf("%d ",sum);
            sum = 0;

        }
        printf("\n");
        for(j=0;j<5;j++){
         for(i=0;i<5;i++){
            sum += a[i][j];
        }
            printf("%d ",sum);
            sum = 0;

        }

 }
