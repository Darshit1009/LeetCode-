#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
    {
        int c = 0;
        for (int i = 0; i < startTime.size(); i++)
        {
            if (queryTime >= startTime[i] && queryTime <= endTime[i])
            {
                c++;
            }
        }
        return c;
    }
};
int main()
{
    Solution s;
    vector<int> stt = {1, 2, 3};
    vector<int> endt = {3, 2, 7};
    cout << s.busyStudent(stt, endt, 4);
    return 0;
}