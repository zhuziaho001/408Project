#include <stdio.h>
#include <stdlib.h>
typedef struct LNode
{
    int data;
    struct LNode *next;
} LinkList;

/************************
*名称:
*功能:头插法
*参数1:
*参数2:
************************/
LinkList *HeadInsert(LinkList *L)
{
    LinkList *temp;
    int t;
    L->next = NULL;
    L->data = t;
    scanf("%d", &t);
    while (t != -1)
    {
        temp = (LinkList *)malloc(sizeof(LinkList));
        temp->data = t;
        temp->next = L->next;
        L->next = temp;
        scanf("%d", &t);
    }
    return L;
}

int main()
{
    LinkList *L = (LinkList *)malloc(sizeof(LinkList));
    HeadInsert(L);
    L = L->next;
    printf("%d\n", L->data);
    free(L);
    printf("%d\n", L->data);
    return 0;
}