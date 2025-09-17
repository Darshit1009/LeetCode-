#include <iostream>
using namespace std;

int main()
{
    int num = 9669;
    string a = to_string(num);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '6')
        {
            a[i] = '9';
            break;
        }
    }

    int x = stoi(a);
    cout << x << endl;
    return 0;
}