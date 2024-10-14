// basic operation of queues using STL
#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"Size of queue is :"<<q.size()<<endl;

    cout<<"The front element is :"<<q.front()<<endl;

    q.pop();
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"It is empty"<<endl;
    }
    else{
        cout<<"It is not empty"<<endl;
    }
    q.pop();
      if(q.empty()){
        cout<<"It is empty"<<endl;
    }
    else{
        cout<<"It is not empty"<<endl;
    }
return 0;


}