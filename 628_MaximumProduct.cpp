#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 3};
    int n = sizeof(nums) / sizeof(nums[0]);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }

    return 0;
}