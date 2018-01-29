#include <iostream>
using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2)
{
    ListNode *p1 = pHead1;
    ListNode *p2 = pHead2;

    int len1 = 0;
    int len2 = 0;

    while(p1 != NULL)
    {
        p1 = p1->next;
        len1++;
    }

    while(p2 != NULL)
    {
        p2 = p2->next;
        len2++;
    }

    int diffLen = len1-len2;
    if(diffLen < 0)
        diffLen = -diffLen;

    p1 = pHead1;
    p2 = pHead2;

    if (len1 > len2)
    {
        for(int i = 0; i < diffLen;i++)
            p1 = p1->next;

        while(p1 != p2)
        {
            p1 = p1->next;
            p2 = p2->next;
        }

        return p1;
    }
    else
    {
        for(int i = 0; i < diffLen;i++)
            p2 = p2->next;

        while(p1 != p2)
        {
            p1 = p1->next;
            p2 = p2->next;
        }

        return p1;
    }
}


int main() {

    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(2);
    ListNode *n3 = new ListNode(3);
    ListNode *n4 = new ListNode(4);
    ListNode *n5 = new ListNode(5);
    ListNode *n6 = new ListNode(6);
    ListNode *n7 = new ListNode(6);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n5->next = n4;
    n4->next = n6;

   ListNode *ans = FindFirstCommonNode(n1,n5);
   cout<<ans->val<<endl;
}