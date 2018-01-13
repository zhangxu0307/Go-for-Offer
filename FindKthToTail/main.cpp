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

ListNode* FindKthToTail(ListNode* pListHead, unsigned int k)
{
    if(pListHead == NULL || k <= 0)
        return NULL;

    ListNode *pAhead = pListHead;
    ListNode *pAfter = NULL;

    for(int i = 0; i < k-1;i++)
    {
        if(pAhead->next != NULL)
            pAhead = pAhead->next;
        else
            return NULL;
    }

    pAfter = pListHead;

    while(pAhead->next != NULL)
    {
        pAhead = pAhead->next;
        pAfter = pAfter->next;
    }

    return pAfter;
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
    ListNode *ans =  FindKthToTail(p1, 3);
    cout<<ans->val<<endl;


}