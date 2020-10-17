#include <iostream>
#include <string>
using namespace std;
int main()
{
        string str;
        cout<<"Enter the string\t";
        getline(cin,str);
        int i,j,count=0,len;
        len=str.length();
        for(i=0; i<len; i++)
        {          count=0;
                   for(j=0; j<len; j++) {
                           if(str[i]==str[j])
                                   count++;


                   }
                   if(count==1) {
                           cout<<str[i];
                           break;
                   }}
}
