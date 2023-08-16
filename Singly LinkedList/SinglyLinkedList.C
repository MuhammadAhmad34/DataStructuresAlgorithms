#include <stdio.h>
#include <stdlib.h>


struct Node
{
    /* 
    ? The code defines a structure called `Node` which represents a node in a linked list. 
    ? Each node contains two members: `data`,which stores the data value of the node, and `next`, which is a pointer to the next node in the linked list.
     */
    int data;
    struct Node *next;
};

// 
void Listdisplay(struct Node *head)
{
    /*
     ? The `Listdisplay` function is used to display the elements of a linked list. 
     ? It takes a pointer to the head of the linked list as a parameter.
    */
    while (head != NULL)
    {
        printf("[%d]->", head->data);
        head = head->next;
    }
    printf("\n");
}

struct Node *insertAtfirst(struct Node *ptr, int data)
{
    /*
    ! The `insertAtfirst` function is used to insert a new node at the beginning of a linked list.
    * It takes two parameters: `ptr`, which is a pointer to the head of the linked list, and `data`,
    * which is the data value of the new node to be inserted.
*/
    struct Node *new_head = (struct Node *)malloc(sizeof(struct Node));
    new_head->data = data;
    new_head->next = ptr;
    return new_head;
}

struct Node *insertAtEnd(struct Node *ptr, int data)
{
    /*
    ! The `insertAtEnd` function is used to insert a new node at the end of a linked list. 
    * It takes two parameters: `ptr`,
    * which is a pointer to the head of the linked list, and `data`, which is the data value of the new node to be inserted.
*/

    struct Node *head = ptr;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->data = data;
    newNode->next = NULL;
    return head;
}


struct Node *insertAtIndex(struct Node *ptr, int data, int index)
{
    /*
    ! The `insertAtIndex` function is used to insert a new node at a specific index in a linked list. 
    * It takes three parameters: `ptr`, which is a pointer to the head of the linked list, `data`, 
    * which is the data value of the new node to be inserted, and `index`, 
    * which is the index at which the new node should be inserted.
    */
    struct Node *head = ptr;
    struct Node *new_Node = (struct Node *)malloc(sizeof(struct Node));
    for (int i = 0; i < index - 1; i++)
    {
        ptr = ptr->next;
    }
    new_Node->next = ptr->next;
    new_Node->data = data;
    ptr->next = new_Node;
    return head;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;
    Listdisplay(insertAtIndex(head, 60, 2));
    return 0;
}