#include<stdio.h>
int power(int m,int n)
{
	if(n==0){


		return 1;
	}
	else 
	{
		return power(m,n-1)*m;
	}
}
int main(int argc, char const *argv[])
{
	


	int a=2,b=2;
	printf("%d\n",power(a,b));
	return 0;
}