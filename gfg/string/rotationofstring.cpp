#include <iostream>
using namespace std;
int main()
{
        string str1, str2, temp;
        int flag = 0;
        cout << "Enter the string 1\t";
        getline(cin, str1);
        cout << "Enter the string 2\t";
        getline(cin, str2);
        if (str1.length() != str2.length())
        {
                cout << "String is not equal so rotation is not possible";
        }
        else
        {
                temp = str1 + str1;

                for (int i = 0; i < str2.length(); i++)
                {

                        for (int j = str2.length(); j < temp.length(); j++)
                        {
                                if (temp.find(str2) != std::string::npos)
                                /*std::string::npos meanns not found
                           str2 not found in temp if it equal
                           or ye uppar jo hai not found k equal
                           ni hona chaiyee
                         */
                                {
                                        flag = 1;
                                        break;
                                }
                        }
                }
                if (flag == 1)
                {
                        cout << "COOL";
                }
                else
                {
                        cout << "not cool";
                }
        }
