#include <iostream>
#include <cstring>
using namespace std;
int main(){

        string str1;
        cout<<"Enter the string\n";
        getline(cin,str1);
        int high,i,flag=0;
        high=str1.length();
        //    cout<<high;
        for(i=0; i<high; i++) {
                if(str1[i]!=str1[high-i-1])
                {
                        flag=1;
                        break;
                }
        }
        if(flag==1)
                cout<<"string in not pallindrome";
        else
                cout<<"string is pallindrome";
}
