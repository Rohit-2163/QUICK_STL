#include<iostream>
#include<queue>
using namespace std;

int main(){
    //creating max priority queue / max heap
    priority_queue<int> max_queue;

    // putting elements in max_queue;
    max_queue.push(5);
    max_queue.push(1);
    max_queue.push(4);
    max_queue.push(2);
    max_queue.push(3);

    cout<<"PRIORITY MAX QUEUE MAX HEAP -> "<<endl;

    //printing size od max head
    cout<<"SIZE OF MAX PRIORITY QUEUE : "<<max_queue.size()<<endl;

    //max queue puts maximum elment at top
    // printing max heap/max priority queue
    int size_max=max_queue.size();
    cout<<"PRINTING MAX QUEUE MAX HEAP : ";
    for (int i = 0; i < size_max; i++)
    {
        cout<<max_queue.top()<<" ";
        max_queue.pop();
    }cout<<endl;

    cout<<"IS MAX QUEUE/MAX HEAP EMPTY ? : "<<max_queue.empty()<<endl<<endl<<endl;

    cout<<"PRIORITY MIN QUEUE -> "<<endl;

    //creating min heap/ min queue;
    priority_queue<int, vector<int>, greater<int> > min_queue;

    //putting elements in  min_queue;

    min_queue.push(5);
    min_queue.push(1);
    min_queue.push(0);
    min_queue.push(2);
    min_queue.push(3);

    // size of min queue
    cout<<"SIZE OF MIN QUEUE? MIN HEAP : "<<min_queue.size()<<endl;
    int size_min=min_queue.size();
    cout<<"PRINTING MIN QUEUE MIN HEAP : ";
    for (int i = 0; i < size_min; i++)
    {
        cout<<min_queue.top()<<" ";
        min_queue.pop();
    }cout<<endl;
    cout<<"IS MIN QUEUE MIN /HEAP EMPTY ? : "<<min_queue.empty()<<endl;
    
    
    
    return 0;
}