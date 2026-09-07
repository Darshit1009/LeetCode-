// /**
//   Definition for singly-linked list.
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
//  */
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *newNode = head;
        ListNode *slow = head;
        ListNode *fast = head;
        vector<int> a;
        // int c = 0;
        while (fast != nullptr && fast->next != nullptr)
        {

            slow = slow->next;
            fast = fast->next->next;
            // c++;
        }
        return slow;
    }
};
int main()
{
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s;
    ListNode *middle = s.middleNode(head);
    cout << "Middle node: " << middle->val << endl;
    return 0;
}