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

ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
{
    if(pHead1 == NULL)
        return pHead2;
    if(pHead2 == NULL)
        return pHead1;

    ListNode *p = NULL;

    if(pHead1->val > pHead2->val)
    {
        p = pHead2;
        p->next = Merge(pHead1, pHead2->next);
    }
    else
    {
        p = pHead1;
        p->next = Merge(pHead1->next, pHead2);
    }

    return p;
}
int main() {

    ListNode *p1 = new ListNode(1);
    ListNode *p2 = new ListNode(3);
    ListNode *p3 = new ListNode(8);
    ListNode *p4 = new ListNode(11);
    p1->next = p2;
    p2->next = p3;
    p3->next = p4;

    ListNode *p5 = new ListNode(2);
    ListNode *p6 = new ListNode(6);
    ListNode *p7 = new ListNode(9);
    ListNode *p8 = new ListNode(15);
    p5->next = p6;
    p6->next = p7;
    p7->next = p8;

    printLinkList(p1);
    printLinkList(p5);

    ListNode *head = Merge(p1,p5);
    printLinkList(head);

}