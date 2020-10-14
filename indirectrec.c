#include <stdio.h>
 void funb(int n);
void funa(int n)
{
	if(n>0)
	{
		printf("%d ",n);
		funb(n-1);
	}
}
void funb(int n)
{
if(n>1)
{
	printf("%d    ",n);
	funa(n/2);
}
}
int main(int argc, char const *argv[])
{
	/* code */
	funa(20);
	return 0;
}