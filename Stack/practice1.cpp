// implementation of stack using array using internal stack

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "The size of the stack is: " << s.size() << endl;
    cout << "The top element of the stack is: " << s.top() << endl;

    s.pop();
    cout << "The top element of the stack is: " << s.top() << endl;

    cout << "The stack is empty: " << s.empty() << endl;

    return 0;
}
