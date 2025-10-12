#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> selfDividingNumbers(int left, int right)
    {
        vector<int> result;

        for (int i = left; i <= right; i++)
        {
            if (isSelfDividing(i))
            {
                result.push_back(i);
            }
        }

        return result;
    }

private:
    bool isSelfDividing(int num)
    {
        int temp = num;
        while (temp > 0)
        {
            int digit = temp % 10;

            if (digit == 0 || num % digit != 0)
            {
                return false;
            }

            temp = temp / 10;
        }

        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution S;
    vector<int> result = S.selfDividingNumbers(15, 20);

    cout << "Self-dividing numbers: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1)
            cout << ", ";
    }
    cout << endl;

    return 0;
}
