#include<stdio.h>
int tra(int matrix[7][7])
{int rows,columns,i,j,trans[7][7];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            trans[j][i]=matrix[i][j];
        }
    }
    
}

int main()
{columns
    int rows,columns,i,j, matrix[10][10],trans[10][10];
    printf("enter rows and columns \n");

    scanf("%d%d", &rows,&);
    printf("enter matrix \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<columns;j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
     trans[10][10]=tra(matrix[10][10]);
      for(i=0;i<columns;i++)
        {

        for(j=0;j<rows;j++)
        {
printf("%d", trans[i][j]);
        }
printf("\n");
    }

    return 0;
}