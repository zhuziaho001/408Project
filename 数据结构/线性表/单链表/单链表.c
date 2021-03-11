#include "单链表.h"

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
/************************
*名称:GetElem
*功能:查找第i个值
************************/
LinkList *GetElem(LinkList *L, int i)
{
    int j = 1;
    LinkList *p = L->next;
    if (i == 0)
    {
        return L;
    }
    if (i < 1)
    {
        return NULL;
    }
    while (p && j < i)
    {
        p = p->next;
        j++;
    }
    return p;
}
/************************
*名称:LocatElem
*功能:按值查找
************************/
LinkList *LocateElem(LinkList *L, int i)
{
    LinkList *p = L->next;
    while (p != NULL && p->data != i)
    {
        p = p->next;
    }
    return p;
}
/************************
*名称:LinkInsert
*功能:插入节点
*参数1:源节点
*参数2:插入节点
************************/
LinkList *LinkInsert(LinkList *L1, LinkList *L2, int i)
{
    LinkList *p = GetElem(L1, i - 1);
    (L2)->next = p->next;
    p->next = L2;
    return L1;
}

/************************
*名称:LinkDelete
*功能:删除节点
*参数1:链表
*参数2:位置
************************/
LinkList *LinkDelete(LinkList *L, int i)
{
    LinkList *p = GetElem(L, i - 1);
    LinkList *t = p->next;
    p->next = t->next;
    free(t);
    return L;
}
/************************
*名称:GetLinkLength
*功能:求表长
*参数1:
*参数2:
************************/
int GetLinkLength(LinkList *L)
{
    int i = 0;
    LinkList *p = L;
    while (p && p->next != NULL)
    {
        i++;
        p = p->next;
    }
    return i;
}