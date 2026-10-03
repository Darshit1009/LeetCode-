class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;

        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }

        return true;
    }

    int diagonalPrime(vector<vector<int>> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (isPrime(nums[i][i]))
            {
                ans.push_back(nums[i][i]);
            }
        }

        int col = nums[0].size() - 1;
        int row = 0;

        while (row < nums.size() && col >= 0)
        {
            if (isPrime(nums[row][col]))
            {
                ans.push_back(nums[row][col]);
            }

            row++;
            col--;
        }

        return ans.size() > 0
                   ? *max_element(ans.begin(), ans.end())
                   : 0;
    }
};