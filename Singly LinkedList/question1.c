/*
    ! Question:
    ? Given a singly linked list and a number k.
    ? Write a function to find the (N/k)th element.
    ? 1. where N is the number of elements in the list. 2. k is the Division Factor
    ? We need to consider ceil value in case of decimals.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Node
{
    int data;
    struct Node *next;
};

int length(struct Node *ptr)
{
    int len = 0;
    while (ptr != NULL)
    {
        len++;
        ptr = ptr->next;
    }
    return len;
}

int fractional_node(struct Node *ptr, int division_factor)
{
    struct Node *head = ptr;
    int len = length(head);
    int result = (int)ceil((double)len / division_factor);

    /* The code block `if (ptr == NULL || result < 0)` is checking if the linked list is empty or if
    the division factor is invalid. If either of these conditions is true, it means that the list is
    not long enough or the division factor is not valid, and the function will print a message
    indicating this and return -1. */
    if (ptr == NULL || result < 0)
    {
        printf("\n-> The list is not enough long and Division factor is invalid.\n");
        return -1;
    }

    for (int i = 0; i < result; i++)
    {
        /* code */
        ptr = ptr->next;
    }

    return ptr->data;
}

void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("[%d]->", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sixth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = fifth;

    fifth->data = 50;
    fifth->next = sixth;

    sixth->data = 60;
    sixth->next = NULL;

    int division_factor = 3;
    int fractionalNode = fractional_node(head, division_factor);
    if (fractionalNode != -1)
    {
        printf("\n-> Fractional Node = [%d]\n", fractionalNode);
    }
    return 0;
}