#include "SingleLinkList.h"

/************************
*名称:isEmpty
*功能:判断是否为NULL
************************/
int isEmpty(LinkList *L)
{
    if (!L)
        return 1;
    else
        return 0;
}

/************************
*名称:InitList
*功能:初始化单链表
************************/
int InitList(LinkList **L)
{
    *L = (LinkList *)malloc(sizeof(LinkList));
    if (!isEmpty(*L))
    {
        printf("初始化成功!\n");
    }
    else
    {
        printf("初始化失败!\n");
        return 0;
    }

    (*L)->next = NULL;
    return 1;
}

/* 遍历链表 */
void TraverseList(LinkList *List)
{
    LinkList *ptr = List->next;
    if (ptr == NULL)
    {
        printf("链表为空\n");
    }

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

/************************
*名称:HeadInsert
*功能:头插法
************************/
LinkList *HeadInsert(LinkList *L)
{
    LinkList *temp;
    int t;
    L->next = NULL;
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
/************************
*名称:TailInsert
*功能:尾插法
************************/
LinkList *TailInsert(LinkList *L)
{
    LinkList *s, *r = L;
    int x;
    scanf("%d", &x);
    while (x != -1)
    {
        s = (LinkList *)malloc(sizeof(LinkList));
        s->data = x;
        r->next = s;
        r = s;
        scanf("%d", &x);
    }
    r->next = NULL;
    return L;
}
