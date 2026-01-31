#include<stdio.h>
int fabonacci(int n)
{
    if(n<=1)
      return n;
    else
      return fabonacci(n-1)+fabonacci(n-2);
}
int main()
{
    int i,n;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    printf("Fabonacci series is:");
    for(i=0;i<n;++i)
     {
         printf("%d\t",fabonacci(i));
     }
    return 0;
}