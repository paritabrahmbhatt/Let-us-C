// Matrix Multiplication

#include<stdio.h>
#define MAX 50
void main()
{
    int arow,acol,brow,bcol,i,j,k,x,y,sum=0;
    int a[MAX][MAX], b[MAX][MAX],ans[MAX][MAX];
    printf("Enter rows and column for matrix a: ");
    scanf("%d %d",&arow,&acol);
    printf("Enter rows and column for matrix b: ");
    scanf("%d %d",&brow,&bcol);
    if(acol == brow)
    {
        // Take input for matrix a
        printf("Enter the elements of matrix a: \n");
        for(x=0;x<arow;x++)
        {
            for(y=0;y<acol;y++){
                scanf("%d",&a[x][y]);
            }
            printf("\n");
        }
        // Take input for matrix b
        printf("Enter the elements of matrix b: \n");
        for(x=0;x<brow;x++)
        {
            for(y=0;y<bcol;y++){
                scanf("%d",&b[x][y]);
            }
            printf("\n");
        }
        // Multiplication
        for(i=0;i<arow;i++)
        {
            for(j=0;j<bcol;j++)
            {
                for(k=0;k<acol;k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                ans[i][j]=sum;
                sum = 0;
            }
        }
        printf("\nResultant Matrix\n");
        for(i=0;i<arow;i++){
            for(j=0;j<bcol;j++){
                printf("%d ",ans[i][j]);
            }
            printf("\n");
        }

    }
    else
        printf("Wrong Input!!!");
}
