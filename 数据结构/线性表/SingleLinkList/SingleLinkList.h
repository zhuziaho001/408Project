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