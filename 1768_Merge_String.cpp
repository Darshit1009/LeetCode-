class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int l1 = word1.size();
        int l2 = word2.size();
        std::string ans = "";
        int i = 0;
        int index1 = 0;
        int index2 = 0;
        while (i < l1 * 2 && i < l2 * 2)
        {
            if (i % 2 == 0)
            {
                ans += word1[index1];
                index1++;
            }
            else
            {
                ans += word2[index2];
                index2++;
            }
            i++;
        }
        if (l1 > l2)
        {
            ans += word1.substr(index1, l1);
        }
        else
        {
            ans += word2.substr(index1, l2);
        }
        return ans;
    }
};
