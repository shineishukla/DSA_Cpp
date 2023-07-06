//implement queue using linked list

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;
    int size;
    public:
    Queue(){
        this->head=NULL;
        this->tail=NULL;
        this->size=0;
    }

void enqueue(int data){
    Node* newNode= new Node(data);
    if(this->head==NULL){
        this->head=newNode;
        this->tail=newNode;
    }
    else{
        this->tail->next=newNode;
        this->tail=newNode;
    }
    this->size++;
}

int dequeue(){
    if(this->head==NULL){
        return 0;
    }
    int ans=this->head->data;
    Node* temp=this->head;
    this->head=this->head->next;
    delete temp;
    this->size--;
    return ans;
}

int front(){
    if(this->head==NULL){
        return 0;
    }
    return this->head->data;
}

bool isEmpty(){
    return this->size==0;
}

int getSize(){
    return this->size;
}
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.dequeue();
    q.enqueue(50);

    while(not q.isEmpty()){
        cout<<q.front()<<" ";
        q.dequeue();
    }

}