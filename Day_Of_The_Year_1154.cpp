#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string date = "2019-02-25";
    string first = date.substr(0, 4);
    int a = stoi(first);

    string second = date.substr(5, 2);
    int d = stoi(second);

    string last = date.substr(8, 2);
    int e = stoi(last);
    int days = 0;

    cout << last << endl;

    for (int i = 1; i < d; i++)
    {
        if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        {
            if (i == 2)
                days += 29;
            else if (i == 4 || i == 6 || i == 9 || i == 11)
                days += 30;
            else
                days += 31;
        }
        else
        {
            if (i == 2)
                days += 28;
            else if (i == 4 || i == 6 || i == 9 || i == 11)
                days += 30;
            else
                days += 31;
        }
    }

    days += e;
    cout << days;

    return 0;
}