// Some basic operation of stack using STL
#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s;
    // push operation
    s.push(2);
    s.push(3);
    s.push(4);

    // pop operation
    s.pop();
    s.pop();

    // find top element
    cout<<"The top element is :"<<s.top()<<endl;

    // check stack is empty or not
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    // find the size of stack

    cout<<"Size is :"<<s.size()<<endl;
    return 0;
}