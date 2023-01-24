#include<iostream>
#include<stack>
using namespace std;

int main(){

    // creating stack
    stack<string> s;

    //putting elements in it;
    s.push("first pushed");
    s.push("second pushed");
    s.push("third pushed");

    cout<<"TOP ELEMENT : "<<s.top()<<endl;

    //using pop
    s.pop(); //pop the top element;

    cout<<"TOP ELEMENT : "<<s.top()<<endl;

    cout<<"SIZE OF STACK : "<<s.size()<<endl;

    cout<<"EMPTY OR NOT : "<<s.empty()<<endl;

    
    return 0;
}