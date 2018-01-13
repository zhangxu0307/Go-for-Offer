#include <iostream>
using namespace std;

struct LinkListNode
{
    int value;
    LinkListNode *next;
};

void printLinkList(LinkListNode *pHead)
{
    LinkListNode *pNode = pHead;
    while(pNode != NULL)
    {
        cout<<pNode->value<<" ";
        pNode = pNode->next;

    }
    cout<<endl;
}


void deleteLinkListNode(LinkListNode **pHead, LinkListNode *pDelete)
{
    if(!pHead || !pDelete)
        return;

    if(pDelete->next != NULL) // 删除的不是末尾节点
    {
        LinkListNode *pNext = pDelete->next;
        pDelete->value = pNext->value;
        pDelete->next = pNext->next;
        delete pNext;
        pNext = NULL;

    }

    else if(*pHead == pDelete) // 删除的是头结点，且这个链表中只有头结点
    {
        delete pDelete;
        pDelete = NULL;
        *pHead = NULL; // 这一句是两层指针的原因

    }

    else // 删除的是末尾节点，没有好办法，只能遍历找到前一个节点
    {
        LinkListNode *p = *pHead;
        while(p->next != pDelete)
        {
            p = p->next;
        }
        p->next = NULL;
        delete pDelete;
        pDelete = NULL;

    }
    return;


}


int main() {

    LinkListNode *p1 = new LinkListNode();
    LinkListNode *p2 = new LinkListNode();
    LinkListNode *p3 = new LinkListNode();
    LinkListNode *p4 = new LinkListNode();
    p1->value = 1;
    p1->next = p2;
    p2->value = 2;
    p2->next = p3;
    p3->value = 3;
    p3->next = p4;
    p4->value = 4;
    p4->next = NULL;

    printLinkList(p1);
    deleteLinkListNode(&p1, p4);
    printLinkList(p1);

}