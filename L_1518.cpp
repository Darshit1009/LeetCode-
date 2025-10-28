#include <iostream>
using namespace std;

class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {

        int drink = numBottles;
        while (numBottles >= numExchange)
        {
            int newBottles = numBottles / numExchange;
            drink += newBottles;
            numBottles = newBottles + (numBottles % numExchange);
        }
        return drink;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.numWaterBottles(15, 4);
    return 0;
}
