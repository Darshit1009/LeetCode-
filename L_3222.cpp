#include <iostream>
using namespace std;
class Solution
{
public:
    string winningPlayer(int x, int y)
    {
        int turns = min(x, y / 4);

        return (turns % 2 == 1) ? "Alice" : "Bob";
    }
};

int main()
{
    Solution s;
    cout << s.winningPlayer(1, 4);
    return 0;
}