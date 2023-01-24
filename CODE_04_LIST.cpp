#include<iostream>
#include<list>
using namespace std;

int main(){

    //creating list
    list<int> l;

    //puttng elements in list 
    l.push_back(1);
    l.push_front(2);
    
    // printing
    for(int i: l){
        cout<<i<<" ";
    }cout<<endl;

    //erasing element from list
    l.erase(l.begin());
    cout<<"after erase : ";
    for(int i: l){
        cout<<i<<"  ";
    }cout<<endl;

    // size of list()
    cout<<"siz eof the list :  "<<l.size()<<endl;

    // copying list
    list<int> copy(l);
    // printting copy;
    cout<<"printing copy : ";
    for(int i: copy){
        cout<<i<<" ";
    }cout<<endl;
    list<int> n(5,100);
    // printing n
    cout<<"printing new list : ";
    for(int i: n){
        cout<<i<<" ";
    }cout<<endl;
    
    
    return 0;
}