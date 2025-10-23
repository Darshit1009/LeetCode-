#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> distributeCandies(int candies, int num_people)
    {
        vector<int> ar(num_people, 0);
        int count = 0;
        for (int i = 0; i < num_people && candies > 0; i++)
        {
            if (candies >= i + 1)
            {
                ar[i] += i + 1;
                candies -= i + 1;
            }
            else
            {
                ar[i] += candies;
                candies = 0;
            }
            count = i + 1;
        }
        int i = 0;
        while (candies > 0)
        {
            int give = count + 1;
            if (candies >= give)
            {
                ar[i] += give;
                candies -= give;
            }
            else
            {
                ar[i] += candies;
                candies = 0;
            }
            count++;
            i++;
            if (i == num_people)
                i = 0;
        }
        return ar;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> answer = s.distributeCandies(10, 3);
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    return 0;
}
