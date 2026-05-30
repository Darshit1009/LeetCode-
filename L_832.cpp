#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        // Reverse each row
        for (int i = 0; i < image.size(); i++)
        {
            reverse(image[i].begin(), image[i].end());
        }
        
        for (int i = 0; i < image.size(); i++)
        {
            for (int j = 0; j < image[i].size(); j++)
            {
                image[i][j] = 1 - image[i][j];
            }
        }

        return image;
    }
};

int main()
{
    Solution s;

    vector<vector<int>> a = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}};

    vector<vector<int>> result = s.flipAndInvertImage(a);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}