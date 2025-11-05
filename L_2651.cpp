#include <iostream>
using namespace std;

class Solution
{
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime)
    {
        if ((arrivalTime + delayedTime) % 24 == 0)
        {
            return 0;
        }
        if ((arrivalTime + delayedTime) > 24)
        {
            return (arrivalTime + delayedTime) % 24;
        }
        return arrivalTime + delayedTime;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    int j = s.findDelayedArrivalTime(15, 11);
    cout << j;
    return 0;
}
