#include <iostream>
using namespace std;
int main(){
        string str1,str2,temp;
        cout<<"Enter the string 1\n";
        getline(cin,str1);
        cout<<"Enter the string 2\n";
        getline(cin,str2);
        temp=str1;
        str1=str2;
        str2=temp;
        cout<<str1<<"\t";
        cout<<str2<<endl;
}
