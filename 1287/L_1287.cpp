#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// thy gyo che aa question
class Solution
{

public:
    int findSpecialInteger(vector<int> &arr)
    {
        vector<int> frq(100000, 0);
        int d = arr.size() * 0.25;
        for (int i = 0; i < arr.size(); i++)
        {
            frq[arr[i]]++;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (frq[arr[i]] > d)
            {
                return arr[i];
            }
        }

        return -1;
    }
};