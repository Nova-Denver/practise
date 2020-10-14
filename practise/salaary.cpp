
#include<iostream>
using namespace std;

int main()
{

  int tsalary,bsalary,acc,dec;
  cin>>bsalary>>acc>>dec;
  tsalary=bsalary+(bsalary*acc)-(bsalary*dec);
  cout<<tsalary;
}
