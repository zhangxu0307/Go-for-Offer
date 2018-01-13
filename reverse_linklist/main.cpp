#include <iostream>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }
};

void printLinkList(ListNode* pListHead)
{
    ListNode *p = pListHead;
    while(p != NULL)
    {
        cout<<p->val<<" ";
        p = p->next;
    }
    cout<<endl;
}

ListNode* ReverseList(ListNode* pHead)
{
    if(pHead == NULL)
        return NULL;

    ListNode *pPrev = NULL;
    ListNode *pNode = pHead;
    ListNode *pNext = NULL;
    ListNode *newHead = NULL;

    while(pNode != NULL)
    {
        if (pNode->next == NULL)
            newHead = pNode;
        pNext = pNode->next;
        pNode->next = pPrev;

        pPrev = pNode;
        pNode = pNext;
    }

    return newHead;

}

int main()
{
    ListNode *p1 = new ListNode(1);
    ListNode *p2 = new ListNode(2);
    ListNode *p3 = new ListNode(3);
    ListNode *p4 = new ListNode(4);
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;

    printLinkList(p1);
    ListNode *newHead = ReverseList(p1);
    printLinkList(newHead);
}