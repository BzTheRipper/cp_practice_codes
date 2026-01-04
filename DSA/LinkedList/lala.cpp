#include<iostream>

using namespace std;

struct nodes{
    int data;
    nodes *next;
};

nodes* createNode(int howMuch)
{
    
        nodes* head = new nodes();

        head->data = 1;
        head->next = nullptr;

        nodes* current = head;

    for(int i = 0; i<howMuch; i++)
    {
        nodes* temp = new nodes();
        temp->data = i;
        temp->next = nullptr;

        current->next = temp;
        current = temp;
    }

    return head;
}

nodes* deleteWhere(nodes* head, int where)
{
    nodes* temp = head;

    while(temp->next != NULL)
    {
        if(temp->next->data == where)
        {
            nodes* frees = temp->next;
            temp->next = temp->next->next;

            delete frees;
            
            break;
        }

        temp = temp->next;
    }
    return head;
}

int main()
{
    
    nodes *head = new nodes();
    head->data = 342;

    cout<<head->data;
    
    int howMuch = 5;

    head = createNode(howMuch);

    head = deleteWhere(head, 3);
    head = deleteWhere(head, 342);
    nodes* travel = head;
    while(travel != nullptr)
    {
        cout<<" "<<travel->data;
        travel = travel->next;
    }

    return 0;
}
