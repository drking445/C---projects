#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

/* structure of a linked list node */
struct ListNode
{
    int data;
    struct ListNode *next;
};
ListNode *head;

void bubblesort(ListNode list)
{
    struct ListNode *ptr1;
    ptr1 = head;
    char temp;
    /* Checking for empty list */
    while(ptr1->next != NULL)
    {
        if(ptr1->data > ptr1->next->data)
        {
            temp = ptr1->data;
            ptr1->data = ptr1->next->data;
            ptr1->next->data = temp;
            ptr1 = head;
        }
        else
        {
            ptr1 = ptr1->next;
        }
    }
}

/* Utility function to insert a node at the begining */
void push(ListNode listnode, char new_data)
{
    ListNode *new_node;
    ListNode *node;
    new_node = new ListNode;
    new_node->data = new_data;
    new_node->next = nullptr;
    
    if(head == NULL)
    {
        head = new_node;
    }
    else
    {
        node = head;
        while(node->next != NULL)
        {
            node = node->next;
        }
        node->next = new_node;
    }
}

/* Utility function to print a linked list */
void printList(ListNode listnode)
{
    ListNode *node;
    node = head;
    while(node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    printf("\n");
}

/* Driver program to test above functions */
int main()
{
    
    ListNode listnode;
    int num = 5;
    char car;
    /* Create following linked list
     12->15->10->11->5->6->2->3 */
    cout << endl;
    cout << "Enter " << num << " list elements seperately: ";
    for(int i = 0; i < num; i++)
    {
        cin >> car;
        push(listnode, car);
    }
    printf("\nUnmodified Linked List: ");
    printList(listnode);
    bubblesort(listnode);
    printf("\nModified Linked List: ");
    printList(listnode);
    
    
    
    return 0;
    
}




