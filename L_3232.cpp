#include <vector>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum1 = 0;
        int total = 0;

        for(int x : nums) {
            total += x;
            if(x < 10) {
                sum1 += x;
            }
        }

        return sum1 != total - sum1;
    }
};