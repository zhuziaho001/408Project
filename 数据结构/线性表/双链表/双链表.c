#include "双链表.h"
/************************
*名称:InitDNode
*功能:初始化链表
************************/
DNode *InitDNode(DNode *L)
{
    L = (DNode *)malloc(sizeof(DNode));
    if (L != NULL)
    {
        printf("初始化成功!\n");
    }
    else
    {
        printf("初始化失败!\n");
    }
    return L;
}
/************************
*名称:InputDNode
*功能:输入链表
************************/
void InputDNode(DNode *L)
{
    DNode *temp, *ptr = L;
    ptr->prior = NULL;
    ptr->next = NULL;
    int t;
    printf("请输入数字,以-1结束:");
    scanf("%d", &t);

    while (t != -1)
    {
        temp = (DNode *)malloc(sizeof(DNode));
        temp->data = t;
        ptr->next = temp;
        ptr = temp;
        ptr->prior = temp;
        scanf("%d", &t);
    }
    ptr->next = NULL;
}

/* 遍历链表 */
void TraverseList(DNode *List)
{
    DNode *ptr = List->next;
    if (ptr == NULL)
    {
        printf("链表为空\n");
    }

    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
