#include <iostream>
#include <math.h>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int root = sqrt(num);
        return root * root == num;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.isPerfectSquare(16);

    return 0;
}
