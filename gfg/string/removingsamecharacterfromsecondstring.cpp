#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
        string str1, str2;
        cout << "Enter the string one\t";
        getline(cin, str1);
        cout << "Enter the string two\t";
        getline(cin, str2);
        for (int i = 0; i < str1.length(); i++)
        {
                for (int j = 0; j < str2.length(); j++)
                {
                        if (str1[i] == str2[j])
                        {
                                str1.erase(i, 1);
                                break;
                        }
                }
        }
        cout << "After remove duplicate\n";
        cout << str1 << endl;
}
