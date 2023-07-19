//doubly linked list 

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
node *head = NULL;
void insert(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *temp1 = head;
        while (temp1->next != NULL)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->prev = temp1;
    }
}
void print()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
}
void deleteNode(int data)
{
    node *temp = head;
    node *temp1 = head;
    while (temp->data != data)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next = temp->next;
    temp->next->prev = temp1;
    delete temp;
}
int main()
{
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    print();
    deleteNode(3);
    cout << endl;
    print();
    return 0;
}
