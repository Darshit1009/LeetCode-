class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
           int total = 0, currSum = 0;

        // Manually compute total sum and initial weighted sum
        for (int i = 0; i < nums.size(); i++) {
            total += nums[i];
            currSum += i * nums[i];
        }

        int maxSum = currSum;

      
        for (int i = 1; i < nums.size(); i++) {
            currSum = currSum - total + nums.size() * nums[i - 1];
            if (currSum > maxSum)
                maxSum = currSum;
        }

        return maxSum;
    }
};