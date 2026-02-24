#include<vector>
#include<iostream>
using namespace std;
#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    int numberOfChild(int n, int k) {
        int count = 0;
        int dir = 1;      
        vector<int> op(n);

    
        for(int i = 0; i < n; i++)
        {
            op[i] = i;
        }


        for(int j = 0; j < k; j++)
        {
            count = count + dir;

            if(count == n - 1 || count == 0)
            {
                dir = -dir;
            }
        }

        return count;
    }
};

int main()
{
Solution s;
cout<<s.numberOfChild(3,5);
}