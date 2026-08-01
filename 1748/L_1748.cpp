#include <vector>
using namespace std;
#include <iostream>
class Solution
{
public:
    int sumOfUnique(vector<int> &nums)
    {
        vector<int> freq(101, 0);

        for (int num : nums)
        {
            freq[num]++;
        }

        int sum = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (freq[i] == 1)
                sum += i;
        }

        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> question = {1, 2, 3, 2};
    std::cout << s.sumOfUnique(question);
    return 0;
}
