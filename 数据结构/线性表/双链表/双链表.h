#include <stdio.h>
#include <stdlib.h>

#define ElemType int

typedef struct DNode
{
    ElemType data;
    struct DNode *prior, *next;
} DNode;

DNode * InitDNode(DNode *L);
void InputDNode(DNode*L);
void TraverseList(DNode *List);