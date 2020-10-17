#include <iostream>
using namespace std;
int main()
{

        string str, temp;
        cout << "Enter the string\t";
        getline(cin, str);
        int count = 0, len;
        len = str.length();
        for (int i = 0; i < len; i++)
        {
                count = 0;

                for (int j = 0; j < len; j++)
                {
                        count++;
                }
                cout << str[i] << count;

                //wrong progamm will get back to it
        }
}
