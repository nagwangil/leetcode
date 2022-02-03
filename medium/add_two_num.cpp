#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *answer = new ListNode();
        ListNode *answer_ptr = answer;

        while (l1 != nullptr || l2 != nullptr)
        {
            int node_sum = (l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val) + answer_ptr->val;
            // printf( "%d , %d , %d \n",(l1 == nullptr ? 0 : l1->val) , (l2 == nullptr ? 0 : l2->val) , answer_ptr->val);
            l1 = l1 == nullptr ? nullptr : l1->next;
            l2 = l2 == nullptr ? nullptr : l2->next;
            int next_val = node_sum / 10;
            node_sum = node_sum % 10;
            answer_ptr->val = node_sum;
            answer_ptr->next = (l1 == nullptr && l2 == nullptr && next_val == 0) ? nullptr : new ListNode(next_val);
            answer_ptr = answer_ptr != nullptr ? answer_ptr->next : answer_ptr;

            // if(answer_ptr!=nullptr)
            // printf("%d %d\n", next_val, answer_ptr->val);
        }
        return answer;
    }
};

int main()
{

    return 0;
}