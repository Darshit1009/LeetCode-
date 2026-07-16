// 3492. Maximum Containers on a Ship

#include<iostream>
using namespace std;

class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {

        int totalCells = n * n;

        int allowedByWeight = maxWeight / w;

        return min(totalCells, allowedByWeight);
    }
};

int main()
{
    Solution obj;

    cout << obj.maxContainers(3, 5, 40);

    return 0;
}