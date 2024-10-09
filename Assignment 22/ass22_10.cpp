#include<iostream>
using namespace std;

bool isalphanumeric(char *);

int main()
{
   char str[] = "Aditya@2580";
   cout << isalphanumeric(str);
   return 0;
}

bool isalphanumeric(char *c)
{
    bool hasDigit = false;
    bool hasAlpha = false;
    int count = 0;

    while (c[count])
    {
        if (c[count] >= '0' && c[count] <= '9')
        {
            hasDigit = true;
        }
        if ((c[count] >= 'A' && c[count] <= 'Z') || (c[count] >= 'a' && c[count] <= 'z'))
        {
            hasAlpha = true;
        }
        count++;
    }

    return hasDigit && hasAlpha;
}
