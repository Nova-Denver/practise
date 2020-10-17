#include <iostream>
using namespace std;
int main()
{

        string str;
        string str2[100];
        cout << "Enter the string\t";
        getline(cin, str);
        int len;
        len = str.length();
        int j = 0;
        for (int i = len - 1; i >= 0; i--)
        {
                cout << str[i];
        }
        //WILL BACK AGAIN
}
