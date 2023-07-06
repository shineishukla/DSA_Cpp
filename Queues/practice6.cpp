//double ended queue

#include <iostream>
using namespace std;

class dounleEndedqueue{
    int *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:
    dounleEndedqueue(int s){
        data=new int[s];
        nextIndex=0;
        firstIndex=-1;
        size=0;
        capacity=s;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
    void enqueue(int element){
        if(size==capacity){
            cout<<"Queue is full"<<endl;
            return;
        }
        data[nextIndex]=element;
        nextIndex=(nextIndex+1)%capacity;
        if(firstIndex==-1){
            firstIndex=0;
        }
        size++;
    }
    int front(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[firstIndex];
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        int ans=data[firstIndex];
        firstIndex=(firstIndex+1)%capacity;
        size--;
        if(size==0){
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;
    }
    int rear(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return data[nextIndex-1];
    }
};

int main(){
    dounleEndedqueue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<q.front()<<endl;
    cout<<q.rear()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;
    cout<<q.rear()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;
    return 0;
}

