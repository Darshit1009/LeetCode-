#include <iostream>
using namespace std;
class Solution
{
public:
    int distanceTraveled(int mainTank, int additionalTank)
    {
        int distance = 0;
        while (mainTank > 0)
        {
            if (mainTank >= 5)
            {
                mainTank -= 5;
                distance += 5 * 10;
                if (additionalTank > 0)
                {
                    mainTank += 1;
                    additionalTank -= 1;
                }
            }
            else
            {
                distance += mainTank * 10;
                break;
            }
        }
        return distance;
    }
};
int main()
{
    Solution s;
    cout << s.distanceTraveled(4, 15);

    return 0;
}