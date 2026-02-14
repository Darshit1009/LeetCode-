#include <iostream>
using namespace std;
#include <string>
class Solution
{
public:
    bool checkRecord(string s)
    {
        int countA = 0;
        int consecutiveL = 0;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == 'A')
            {
                countA++;
                if (countA >= 2)
                    return false;
            }

            if (s[i] == 'L')
            {
                consecutiveL++;
                if (consecutiveL >= 3)
                    return false;
            }
            else
            {
                consecutiveL = 0;
            }
        }

        return true;
    }
};
