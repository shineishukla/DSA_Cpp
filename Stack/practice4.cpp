// implementation of stack using linked list using internal stack

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<"\n";
    st.push(50);
    st.push(60);
    cout<<st.top()<<"\n";

    st.pop();
    st.pop();
    cout<<st.top()<<"\n";
    cout<<st.empty()<<"\n";


    return 0;
}
