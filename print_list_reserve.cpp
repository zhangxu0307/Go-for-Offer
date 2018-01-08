
#include<iostream>
#include<vector>
#include<stack>
using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
};

// 打印vector内容
void printArray(const vector<int> &data)
{
    for(int i = 0; i < data.size(); i++)
        cout<<data[i]<<" ";
    cout<<endl;
}

// 正常打印链表
void printList(ListNode* head)
{
    if (head == NULL)
        return;
    ListNode *p = head;
    while (p)
    {
        cout<<p->val<<" ";
        p = p->next;
    }
    cout<<endl;

}


vector<int> printListFromTailToHead(ListNode* head) {

    stack<int> s;
    vector<int> ans;

    ListNode *p = head;
    while (p != NULL)
    {
        s.push(p->val);
        p = p->next;
    }

    while (!s.empty())
    {
        ans.push_back(s.top());
        s.pop();
    }
    return ans;
}

void printListFromTailToHeadv2(ListNode* head, vector<int> &ans)
{
    if (head != NULL)
    {
        if (head->next != NULL)
        {
            printListFromTailToHeadv2(head->next, ans);
        }
        ans.push_back(head->val);
    }
}


int main()
{
    ListNode n1, n2, n3, n4;
    n1.val = 1;
    n2.val = 2;
    n3.val = 3;
    n4.val = 4;
    n1.next = &n2; // 取地址运算符
    n2.next = &n3;
    n3.next = &n4;
    n4.next = NULL; // 必须指定最后一个指针的NULL
    ListNode *head = &n1;

    printList(head);
    vector<int> ans;
    //ans = printListFromTailToHead(head);
    printListFromTailToHeadv2(head, ans);
    printArray(ans);

}
