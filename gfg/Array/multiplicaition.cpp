#include <iostream>
using namespace std;
int main()
{   int a[100][100],b[100][100],c[100][100],r1,c1,r2,c2,i,j,k;
	cout<<"Enter the row and column of a";
	cin>>r1>>c1;
//	cout<<r1<<"  "<<c1;
	cout<<"Enter the row and column of b";
	cin>>r2>>c2;
//	cout<<r2<<" "<<c2;
if(c1!=r2)
{
	cout<<"Multiplacation is not possible";

}
else
{
cout<<"Enter the element in matrix one";
for(int i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	cin>>a[i][j];
}
cout<<"Enter the element in matrix two";
for(int i=0;i<r2;i++)
{
	for(j=0;j<c2;j++)
	cin>>b[i][j];
}
cout<<"MULTIPLICATION";
for(i=0;i<r1;i++)
{
	for(j=0;j<c2;j++)
	{
		c[i][j]=0;

	for(k=0;k<r2;k++)

	{
		c[i][j]+=b[i][k]*a[k][j];
	}
}
}
cout<<"Enter the element in matrix one \n";
for(int i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
{
	cout<<c[i][j]<<" ";
}
cout<<"\n";
}
}

	return 0;
}
