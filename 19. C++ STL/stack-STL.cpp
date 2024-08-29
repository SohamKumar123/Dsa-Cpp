#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack <string> s;
    s.push("Soham");
    s.push("Kumar");
    s.push("Gupta");
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
}