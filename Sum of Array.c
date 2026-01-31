#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    int n;
    printf("Enter the elements for first array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements for second array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Select the array which you want to see:\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Elements of first array are:\n");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        }
    }
    else if(n==2)
    {
        printf("Elements of second array are:\n");
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
        }
    }
    else
      printf("Invalid");
    printf("Sum of two array is:\n");
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}