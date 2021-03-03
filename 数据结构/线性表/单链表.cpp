#include <iostream>
using namespace std;

#define ElemType int
#define List LNode

typedef struct LNode
{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;


LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;
    L=(LinkList)malloc(sizeof(LNode));
    L->next=NULL;
    cin>>x;
    while(x!=-1){
        s=(LinkList)malloc(sizeof(LNode));
        s->data=x;
        s->next=L->next;
        L->next=s;
        cin>>x;
    }
    return L;
}


int main()
{
    LNode L;
    List_HeadInsert(L);

    
    return 0;
}
