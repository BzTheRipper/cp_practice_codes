#include<iostream>
#include<stdlib.h>

using namespace std;

struct ListNode
{
    int data;
    ListNode* next;
};


ListNode* createNewNode(int data)
{
    ListNode* temp = new ListNode();

    temp->data = data;
    temp->next = NULL;

    return temp;
}


ListNode* insertLast(int data, ListNode* head)
{
    ListNode* runner = head;
    ListNode* temp = createNewNode(data);
    

    while(runner->next != NULL)
    {
        runner = runner->next;
    }

    runner->next = temp;

    return head;
}

ListNode* deleteFristNode(ListNode* head)
{
    ListNode* temp = head;
    head = head->next;
    delete temp;
    return head;
}

ListNode* deleteNode(int key, ListNode* head)
{
    ListNode* runner = head;
    
    if(runner->data == key)
    {
        deleteFristNode(head);
    }
    else
    {
        while(runner->next->data != key)
        {
            runner = runner->next;
        }
        ListNode* temp = runner->next;
        runner->next = runner->next->next;
        delete temp;
    }

    return head;
}

ListNode* insertAfter(int key, int data, ListNode* head)
{
    ListNode* runner = head;

    while(runner->data != key)
    {
        runner = runner->next;
    }
    ListNode* temp = createNewNode(data);
    
    
    temp->next = runner->next;
    runner->next = temp;

    return head;
}

void printList(ListNode* head)
{
    ListNode* runner = head;

    while(runner != NULL)
    {
        cout<<runner->data<<" ";
        runner = runner->next;
    }
    cout<<endl;
}

int main()
{
    ListNode* head = createNewNode(25);
    head = insertLast(36, head);
    head = insertLast(47, head);
    head = insertLast(12, head);
    head = insertLast(29, head);

    head = deleteNode(47, head);
    head = insertAfter(36, 68, head);

    printList(head);


}