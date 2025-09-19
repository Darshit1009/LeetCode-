#include <iostream>
using namespace std;
int subtractProductAndSum(int n)
{
    int digit = 1;
    int sum = 0;
    int rem = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem;
        digit = digit * rem;
        n = n / 10;
    }
    return digit - sum;
}
int main(int argc, char const *argv[])
{
    cout << subtractProductAndSum(125);
    return 0;
}
