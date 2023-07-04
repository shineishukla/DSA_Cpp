// implementation of stack using linked list usng external stack

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int d){
        this->data = d;
        this->next = NULL;
    }

};

class Stack{
    Node* head;
    int capacity;
    int maxSize;

    public:
    Stack(int c){
        this->capacity = c;
        this->maxSize = 0;
        head = NULL;
    }

    bool isEmpty(){
        return this->head == NULL;
    }
    bool isFull(){
        return this->maxSize == this->capacity;
    }
    void push(int data){
        if(this->maxSize == this->capacity){
            cout << "Overflow" << endl;
            return;
        }
        Node* new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->maxSize++;
    }
    int pop(){
        if(this->head == NULL){
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        Node* new_head= this->head->next;
        this->head->next= NULL;
        Node* tobeRemoved = this->head;
        int result = tobeRemoved->data;
        delete tobeRemoved;
        this->head = new_head;
        return result;
    }
    int getTop(){
        if(this->head == NULL){
            cout << "Underflow" << endl;
            return INT_MIN;
        }
        return this->head->data;
    }
    int size(){
        return this->maxSize;
    }
};

int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.getTop()<<"\n";
    s.push(40);
    s.push(50);
    cout<<s.getTop()<<"\n";
    s.push(60);

    s.pop();
    s.pop();

    cout<<s.getTop()<<"\n";
    return 0;
}
