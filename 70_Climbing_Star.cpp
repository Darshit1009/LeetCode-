#include <iostream>
using namespace std;
int climbStairs(int n)
{

    int x = 0, y = 1, z = 1;

    while (n / z > 0)
    {
        x = z;
        y = x + z;
        z = x;
        x++;
        y++;
        z++;
        cout << z;
    }
    return z;
}
int main(int argc, char const *argv[])
{

    int z;
    z = climbStairs(5);
    cout << z;
    return 0;
}
