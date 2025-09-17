#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    string date = "2019-02-25";
    string first = date.substr(0, 4);
    int a = stoi(first);

    string second = date.substr(6, 8);
    int d = stoi(second);

    string last = date.substr(9, 11);
    int e = stoi(last);
    int days = 0;

    cout << last;
    for (int i = d; i > 0; i--)
    {
        if (a % 4 == 0)
        {
            if (d == 1)
            {
                days = e;
            }
            if (d == 2)
            {
                days = days + 29;
            }
            if (d == 3 || d == 5 || d == 7 || d == 8 || d == 10 || d == 12)
            {
                days = days + 31;
            }
            if (d == 4 || d == 6 || d == 9 || d == 11)
            {
                days = days + 30;
            }
        }
        else
        {
            if (d == 1)
            {
                days = e;
            }
            if (d == 2)
            {
                days = days + 28;
            }
            if (d == 3 || d == 5 || d == 7 || d == 8 || d == 10 || d == 12)
            {
                days = days + 31;
            }
            if (d == 4 || d == 6 || d == 9 || d == 11)
            {
                days = days + 30;
            }
        }
    }
    cout << days;

    return 0;
}
