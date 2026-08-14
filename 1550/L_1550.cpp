#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int c = 0;
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 != 0)
            {
                c++;
                ans.push_back(arr[i]);
                if (c == 3)
                {
                    return true;
                }
            }
            else
            {

                c = 0;
            }
        }

        return false;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {1, 2, 34, 3, 4, 5, 7, 23, 12};
    cout << boolalpha;
    cout << s.threeConsecutiveOdds(q);
    return 0;
}
