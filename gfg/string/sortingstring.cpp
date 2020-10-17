#include <iostream>
#include <cstring>
using namespace std;
int main()
{
        string str[100], temp[100];
        int n, i, j;
        cout << "Enter the number of string you want to input\n";
        cin >> n;
        cout << "FIRST LETTER SHOULD BE CAPITAL\n";
        for (i = 0; i <= n; i++)
        {
                getline(cin, str[i]);
        }
        for (i = 0; i <= n; i++)
        {
                for (j = i + 1; j <= n; j++)
                {
                        if (str[i] > str[j])
                        {
                                temp[i] = str[i];
                                str[i] = str[j];
                                str[j] = temp[i];
                        }
                }
        }
        for (i = 0; i <= n; i++)
        {
                cout << str[i] << "\t";
        }
}
