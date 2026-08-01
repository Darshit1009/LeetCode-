#include <iostream>
#include <vector>

class Solution
{
public:
    int digitFrequencyScore(int n)
    {

        vector<int> fr(10, 0);
        while (n > 0)
        {
            int rem = n % 10;
            fr[rem]++;
            n = n / 10;
        }
        int sum = 0;
        for (int i = 0; i < fr.size(); i++)
        {
            if (fr[i] > 0)
            {
                sum += fr[i] * i;
            }
        }
        return sum;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.digitFrequencyScore(122);
    return 0;
}
