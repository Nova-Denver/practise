#include <iostream>
#include <string>
using namespace std;
int main(){
        string str;
        cout<<"Enter the string\t";
        getline(cin,str);
        int size,N,part_size;
        cout<<"Enter the part you want to do\t";
        cin>>N;
        size=str.length();
        cout<<"The string size is "<<size<<"\n";
        if(size%N==0) {
                part_size=size/N;  // After this much character string get break;
                cout<<"The parts is "<<part_size;
                for(int i=0; i<size; i++) {
                        if(i%part_size==0) {
                                cout<<"\n";
                        }
                        cout<<str[i];
                }

        }
        else
        {
                cout<<"Impossible";
        }


}
