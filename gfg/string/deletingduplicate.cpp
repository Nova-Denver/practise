#include <iostream>
#include <String>
using namespace std;
int main(){
        string str;
        int i,j,count=0,length;
        getline(cin,str);
        cout<<"The string is "<<str<<endl;
        length=str.length();
        for(i=0; i<length; i++) {
                for(j=i+1; j<length; j++) {
                        if(str[i]==str[j]) {
                                count++;
                                str[i]=str[i+1];
                        }
                }
        }
        cout<<"String is after removing duplicates "<<str;
}
