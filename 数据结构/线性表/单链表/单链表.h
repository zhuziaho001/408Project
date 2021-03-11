#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;
    struct LNode *next;
} LinkList;

int isEmpty(LinkList *L);
int InitList(LinkList **L);
void TraverseList(LinkList *List);
LinkList *HeadInsert(LinkList *L);
LinkList *TailInsert(LinkList *L);

LinkList *GetElem(LinkList *L, int i);
LinkList *LocateElem(LinkList *L, int i);

LinkList *LinkInsert(LinkList *L1, LinkList *L2, int i);
LinkList *LinkDelete(LinkList *L, int i);
int GetLinkLength(LinkList *L);