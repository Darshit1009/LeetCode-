#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    string a;
    cin >> a;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '1')
        {
            a[i] = '0';
            count++;
        }
    }

    if (count == 1)
    {
        a[a.size() - 1] = '1';
        for (char b : a)
        {
            cout << b;
        }
    }
    if (count == 2)
    {
        a[0] = '1';
        a[a.size() - 1] = '1';
        for (char b : a)
        {
            cout << b;
        }
    }
    if (count > 2)
    {
        a[a.size() - 1] = '1';
        for (int i = 0; i < count - 1; i++)
        {
            a[i] = '1';
        }
        for (char b : a)
        {
            cout << b;
        }
    }

    return 0;
}