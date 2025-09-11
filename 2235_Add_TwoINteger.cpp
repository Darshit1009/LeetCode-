#include <iostream>
using namespace std;
class Solution

{
public:
    int sum(int num1, int num2)
    {
        return num1 + num2;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.sum(2, 3);

    return 0;
}
