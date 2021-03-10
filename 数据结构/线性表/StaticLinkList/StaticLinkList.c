#include <stdio.h>
#include <windows.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node node1 = {1, NULL};
    struct Node node2 = {2, NULL};
    struct Node node3 = {3, NULL};
    node1.next = &node2;
    node2.next = &node3;
    // node3.next = &node1;
    struct Node *ptr = &node1;
    while (ptr->next != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->next;
    }

    printf("\n");
    system("pause");
    return 0;
}