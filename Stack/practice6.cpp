// copy one stack to another stack using recursion

#include <iostream>
#include <stack>
using namespace std;

stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(not input.empty()){ //do the process till the stack becomes empty
        int curr=input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> result;
    while(not temp.empty()){
        int curr= temp.top();
        temp.pop();
        result.push(curr);
    }
    return result;
}

void f(stack<int> &st, stack<int> &result){
    if(st.empty()) return;
    int curr=st.top();
    st.pop();
    f(st, result);
    result.push(curr);
}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    //stack<int> res= copyStack(st);
    stack<int>res;
    f(st, res);
    while(not res.empty()){
        int curr= res.top();
        res.pop();
        cout<<curr<<"\n";
    }

    return 0;
}
