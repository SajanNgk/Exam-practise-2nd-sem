#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,m1, n1,m2,n2,s=0;
    printf("Enter row and column of first matrix: ");
    scanf("%d%d",&m1,&n1);
    printf("Enter row and column of second matrix: ");
    scanf("%d%d",&m2,&n2);
    if(n1==m2)
    {
        printf("Enter elements of first matrix : ");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter elements of second matirx: ");
        for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        printf("The product of given matrixes is :\n");
        
     } 
    else
    {
    printf("Given matrixes cannot be multiplied. ");}
}