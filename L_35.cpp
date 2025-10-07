#include <vector>
#include <iostream>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int left = 0, right = nums.size();
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

int main(int argc, char const *argv[])
{
    vector<int> n = {2, 5, 6, 7};
    int target = 10;
    cout << searchInsert(n, target);
    return 0;
}