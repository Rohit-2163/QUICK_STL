#include<iostream>
#include<queue>
using namespace std;

int main(){

    //creating queue
    queue<string> q;

    //putting elements;
    q.push("first in");
    q.push("second in");
    q.push("third in");


    //printing size of queue;
    cout<<"SIZE BEFORE ANY POP : "<<q.size()<<endl; 

    //checking first element
    //in queue first in first out;
    cout<<"FIRST ELEMENT : "<<q.front()<<endl;

    //now pop element
    //in queue first element get poped 
    q.pop();
    cout<<"AFTER POP FIRST ELEMENT : "<<q.front()<<endl;

    //size after performing pop operation;
    cout<<"SIZE AFTER POP OPERATION :  "<<q.size()<<endl;


    
    return 0;
}