#include <iostream>
using namespace std;
int main()
{
        string str, temp;
        int i, j, length;
        cout << "Enter the string\n";
        getline(cin, str);
        //  cout<<"The string is "<<str<<endl;
        length = str.length();
        cout << "The repeated element is \n";
        for (i = 0; i < length; i++)
        {

                for (j = i + 1; j < length; j++)
                {

                        if (str[i] == str[j])
                        {
                                //    temp[0]=str[i];
                                if (temp[0] != str[i])
                                {
                                        cout << str[i] << endl;

                                        break;
                                }
                                temp[0] = str[i];
                        }
                }
        }
}
