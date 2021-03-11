#include <stdio.h>
#include <windows.h>
#include "SingleLinkList.h"

int main()
{
    // LinkList *L1;
    // InitList(&L1);
    // printf("头插法:");
    // HeadInsert(L1);
    // printf("遍历:");
    // TraverseList(L1);

    LinkList *L2;
    InitList(&L2);
    printf("尾插法:");
    TailInsert(L2);
    printf("遍历:");
    TraverseList(L2);

    // printf("按序查找:");
    // int x;
    // printf("请输入第几个数字：");
    // scanf("%d", &x);
    // printf("第%d个值是%d\n", x, GetElem(L2, x)->data);

    // printf("按值查找:");
    // printf("请输入查找的数字：");
    // int x;
    // scanf("%d", &x);
    // printf("已找到%d\n", LocateElem(L2, x)->data);

    // LinkList *L3;
    // InitList(&L3);
    // printf("请输入插入的值:");
    // scanf("%d", &(L3->data));
    // printf("请输入插入的位置:");
    // int l;
    // scanf("%d", &l);
    // LinkInsert(L2, L3, l);
    // printf("遍历:");
    // TraverseList(L2);

    // printf("请输入删除的节点序号:");
    // int l;
    // scanf("%d",&l);
    // LinkDelete(L2, l);
    // printf("删除节点后:");
    // TraverseList(L2);

    printf("求表长:%d\n",GetLinkLength(L2));


    printf("\n");
    system("pause");
    return 0;
}
