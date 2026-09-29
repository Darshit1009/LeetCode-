// 3591. Check if Any Element Has Prime Frequency
class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (isPrime(freq[nums[i]]))
            {
                return true;
            }
        }
        return false;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    vector<int> q = {1, 2, 3, 4, 5, 4};
    cout << s.checkPrimeFrequency(q);
    return 0;
}
