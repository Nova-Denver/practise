#include<stdio.h>
int add(int n)
{

    if(n==0)
    return 0;
    else
  return 1+add(n-1);
}
int main()
{
int a=5;
printf("%d",add(a));
  return 0;
}
