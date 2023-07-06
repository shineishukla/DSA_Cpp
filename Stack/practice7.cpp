// TOwer of Hanoi

#include <iostream>
#include <stack>

int main(){
    std::stack<int> s[3];
    int n, temp, candidate;
    std::cout << "Enter the number of disks: ";
    std::cin >> n;
    for(int i = n; i >= 1; i--){
        s[0].push(i);
    }
    if(n % 2 == 0){
        candidate = 2;
    }
    else{
        candidate = 1;
    }
    while(s[1].size() < n){
        if(s[0].empty()){
            temp = s[1].top(); 
            s[1].pop();
            s[0].push(temp);
            std::cout << "Move disk " << temp << " from B to A" << std::endl;
        }
        else if(s[1].empty()){
            temp = s[0].top();
            s[0].pop();
            s[1].push(temp);
            std::cout << "Move disk " << temp << " from A to B" << std::endl;
        }
        else if(s[0].top() > s[1].top()){
            temp = s[1].top();
            s[1].pop();
            s[0].push(temp);
            std::cout << "Move disk " << temp << " from B to A" << std::endl;
        }
        else{
            temp = s[0].top();
            s[0].pop();
            s[1].push(temp);
            std::cout << "Move disk " << temp << " from A to B" << std::endl;
        }
        if(s[2].empty()){
            if(s[0].empty()){
                temp = s[1].top();
                s[1].pop();
                s[2].push(temp);
                std::cout << "Move disk " << temp << " from B to C" << std::endl;
            }
            else if(s[1].empty()){
                temp = s[0].top();
                s[0].pop();
                s[2].push(temp);
                std::cout << "Move disk " << temp << " from A to C" << std::endl;
            }
            else if(s[0].top() > s[1].top()){
                temp = s[1].top();
                s[1].pop();
                s[2].push(temp);
                std::cout << "Move disk " << temp << " from B to C" << std::endl;
            }
            else{
                temp = s[0].top();
                s[0].pop();
                s[2].push(temp);
                std::cout << "Move disk " << temp << " from A to C" << std::endl;
            }
    }               

    return 0;
} }