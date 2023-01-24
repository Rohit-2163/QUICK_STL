#include<iostream>
#include<deque> //library for using deque 
using namespace std;

int main(){

    //creating a deque ----> doubly eneded que.
    deque<int> d;

    // putting element in it
    d.push_back(1);
    d.push_back(3);
    d.push_front(2);

    // printing
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    //removing elemet from back;
    d.pop_back();

    cout<<"after pop_back : ";
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"print first index element : "<<d.at(1)<<endl;

    cout<<"front element : "<<d.front()<<endl;
    cout<<"back element : "<<d.back()<<endl;
    cout<<"empty or not : "<<d.empty()<<endl;

    //deleting elemet
    cout<<"before erase size :  "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size :  "<<d.size()<<endl;
    cout<<"after erase: ";
    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}