#include<iostream>
#include<set>
using namespace std;

int main(){
    // creating set ;
    set<int> s;

    //putting elements in set
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    //printing set
/*
**important points about set.

it count one elmenet only once no matter how many copy inserted in set .
it presents only unique elements no matter how many times elements get repeated.    
by default it is present in ordered manner / or in sorted manner.
reason beacuse it is implemented by using binary tree;
you can add or delete elements but no modification allowed. 


*/
    cout<<"YOUR SET : { ";
    for(auto i: s){
        cout<<i<<" , ";
    }cout<<"}"<<endl;

    //creating iterator for set
    set<int>::iterator it=s.begin();
    it++; //incrementing iterator moving to next element

    //erasing that element at which iterator present
    s.erase(it);

    //printing set agian after erasing element;
     cout<<"YOUR SET AFTER ERASING VALUE PRESENT AT ITERATOR : { ";
    for(auto i: s){
        cout<<i<<" , ";
    }cout<<"}"<<endl;


    //chceking element present in the set or not;
    cout<<"GIVEN ELEMENT IS PRESENT OR NOT : "<<s.count(5)<<endl;
    cout<<"GIVEN ELEMENT IS PRESENT OR NOT : "<<s.count(-5)<<endl;
/*
    //finiding the given element present at which index
    set<int>::iterator itr=s.find(5);
    cout<<"present at : "<<*itr<<endl;
*/
    return 0;
}