/*
    ! Write a function that takes a value as input and searches for it in a singly linked list.
    ? If the value is found, return true; otherwise, return false.
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *Append(struct Node *head, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        struct Node *current = head;
        while (current->next != NULL)
        {
            /* code */
            current = current->next;
        }
        current->next = new_node;
    }

    return head;
}

int Lenght(struct Node *head)
{
    int len = 0;
    if (head == NULL)
    {
        /* code */
        printf("\n->\t [ERROR] Given LinkedList is Empty....\n");
        return 0;
    }

    while (head != NULL)
    {
        /* code */
        head = head->next;
        len++;
    }

    return len;
}

int Search(struct Node *head, int data)
{
    int len = Lenght(head);
    if (head == NULL)
    {
        /* code */
        printf("\n-> [ERROR] Given LinkedList id Empty....\n");
        return 0;
    }
    else
    {
        for (int i = 0; i < len - 1; i++)
        {
            /* code */
            if (head->data == data)
            {
                /* code */
                return head->data;
            }
            head = head->next;
        }
    }
}

void Display(struct Node *head)
{
    if (head == NULL)
    {
        printf("\n ERROR: Given Linked List Is Empty....\n");
    }

    while (head != NULL)
    {
        printf("[%d]->", head->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = NULL;
    head = Append(head, 10);
    head = Append(head, 20);
    head = Append(head, 30);
    head = Append(head, 40);
    head = Append(head, 50);
    head = Append(head, 60);

    printf("\nSeaerch = {%d}\n", Search(head, 40));
    return 0;
}