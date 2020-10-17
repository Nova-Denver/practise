//BASICALLY ANAGRAM SAME CHARACTER WITH SAME FREQUENCY PRESENT IN ANOTHER STRING
#include <iostream>
#include <string>
using namespace std;
bool AreANAGRAM(string str1, string str2)
{

        if (str1.length() != str2.length())
                return false;
        else
        {
                int count[256] = {0}, i;
                for (int i = 0; i < str1.length(); i++)
                {
                        count[str1[i]]++;
                }
                for (int i = 0; i < str2.length(); i++)
                {
                        count[str2[i]]--;
                }
                //  cout<<"\n\n"<<count<<endl;

                for (int i = 0; i < 256; i++)
                        if (count != 0)
                                return false;

                return true;
        }
}
int main()
{
        cout << "Enter the string 1\t";
        string str1;
        cin >> str1;
        string str2;
        cout << "Enter the string 2\t";
        // getline(cin,str2);
        cin >> str2;
        //  AreANAGRAM(str1,str2);
        if (AreANAGRAM(str1, str2))
        {
                cout << "Two String are anagram\n";
        }
        else
        {
                cout << "Two String are not anagram\n";
        }
        
}
