#include <iostream>

#include <climits>
using namespace std;
int main(){
        string str,temp;
        getline(cin,str);
        int length,i,j,tempcount=0,count=INT_MIN;
        length=str.length();
        //  cout<<length;
        for(i=0; i<length; i++)
        {  tempcount=0;
           for(j=i+1; j<length; j++) {
                   if(str[i]==str[j]) {
                           tempcount++;
                           temp=str[i];
                   }
           }
           //   cout<<tempcount<<"\n\n\n\n\n\n";
           if(tempcount>count)
           {

                   count=tempcount;

           }}
        // due to some error it count 1 less charcter so i put ccount+1;;

        cout<<count+1<<"\t"<<"Repeating elements is "<<temp<<endl;

}
