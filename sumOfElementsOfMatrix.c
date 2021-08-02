#include<stdio.h>
void main()
{
    int a[10][10],i,j,m, n, s=0;
    printf("Enter row and column of array: ");
    scanf("%d%d",&m,&n);
    printf("Enter elements : ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            s=s+a[i][j];
        }
    }
    printf("The sum is %d", s);
}