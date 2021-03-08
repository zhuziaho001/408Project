#include <stdio.h>
#include <stdlib.h>
#define ElemType int
#define List LNode

typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} *LinkList;

/************************
*名称:TraverseList
*功能:遍历链表
*参数1:
*参数2:
************************/
void TraverseList(LinkList L)
{
    LinkList ptr = L->next;
    if (ptr == NULL) {
        printf("链表为空\n");
    }

    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
/************************
*名称:
*功能:
*参数1:
*参数2:
************************/
LinkList List_HeadInsert(LinkList L)
{
    LinkList s;
    int x;
    L = (LinkList)malloc(sizeof(LinkList));
    L->next = NULL;
    scanf("%d", &x);
    while (x != -1)
    {
        s = (LinkList)malloc(sizeof(LinkList));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}
/************************
*名称:GetElem
*功能:
*参数1:
*参数2:
************************/
LinkList GetElem(LinkList L,int i){
    int j=1;
    LinkList p=L->next;
    if(i==0)return L;
    if(i<1)return NULL;
    while (p&&j<1)
    {
        p=p->next;
        j++;
    }
    return p;
}

int main()
{
    LinkList L;
    L = List_HeadInsert(L);
    TraverseList(L);
    L=GetElem(L,3);
    printf("%d",L->data); 

    return 0;
}
