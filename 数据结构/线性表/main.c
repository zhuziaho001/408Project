#include <stdio.h>
#include <windows.h>
#include "SingleLinkList\SingleLinkList.h"
int main()
{
    // LinkList *L = (LinkList *)malloc(sizeof(LinkList));
    // HeadInsert(L);
    // printf("ͷ�巨:");
    // TraverseList(L);

    LinkList *L2;
    InitList(&L2);
    TailInsert(L2);
    printf("β�巨:");
    TraverseList(L2);
    printf("\n");
    system("pause");
    return 0;
}
