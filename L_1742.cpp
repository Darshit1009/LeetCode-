#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int countBalls(int lowLimit, int highLimit)
    {
        vector<int> n(5000);

        for (int i = lowLimit; i <= highLimit; i++)
        {
            n[digitSum(i)]++;
        }
        return *max_element(n.begin(), n.end());
    }
    int digitSum(int num)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};

;
int main()
{
    Solution s;
    int j = s.countBalls(1, 10);
    cout << j;
    return 0;
}