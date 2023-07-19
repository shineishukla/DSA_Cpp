// find largest node in circular linked list

#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head = NULL;
void insert(int data)
{
    node *temp = new node();
    temp->data = data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        head->next = head;
    }
    else
    {
        node *temp1 = head;
        while (temp1->next != head)
        {
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->next = head;
    }
}
void print()
{
    node *temp = head;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
}
int largest()
{
    node *temp = head;
    int max = temp->data;
    do
    {
        if (temp->data > max)
        {
            max = temp->data;
        }
        temp = temp->next;
    } while (temp != head);
    return max;
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
    cout << endl;
    cout << largest()<<endl;
    deleteNode(3);
    print();
}