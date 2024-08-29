// Given an array/list 'ARR' of integers and a position 'M'. You have to reverse the array after that position 

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
vector <int> reverse(vector <int> v,int m){
    int s=m+1;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

int main(){
    int m=3;
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    
    cout<<"Before reversing : ";
    print(v);
    vector <int> ans=reverse(v,m);
    cout<<"After reversing : ";
    print(ans);
    return 0;

}