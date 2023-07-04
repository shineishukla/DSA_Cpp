// implementation of stack using array using external stack

#include <iostream>
using namespace std;

class stack {
    int *arr;
    int top;
    int n;

public:
    stack(int size) {
        n = size;
        arr = new int[n];
        top = -1;
    }

    ~stack() {
        delete[] arr;
    }

    void push(int x) {
        if (top == n - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop() {
        if (top == -1) {
            cout << "No element to pop" << endl;
            return;
        }
        top--;
    }

    int topElement() {
        if (top == -1) {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == n - 1;
    }

    int size() {
        return top + 1;
    }
};

int main() {
    stack s(8);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "The size of the stack is: " << s.size() << endl;
    cout << "The top element of the stack is: " << s.topElement() << endl;

    s.pop();
    cout << "The top element of the stack is: " << s.topElement() << endl;

    cout << "The stack is empty: " << s.isEmpty() << endl;

    return 0;
}
