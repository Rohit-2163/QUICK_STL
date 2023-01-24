#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    // std::vector<int>::iterator it;
    // it=v.begin();

    //to check how much memory allocated or space does have this vector
    cout<<"capacity: "<<v.capacity()<<endl;

    //putting elemensts in the vector  "vector_name.push_back(element)"-->function name;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    //checking capacity of vector.
    cout<<"capacity : "<<v.capacity()<<endl;

    //checking size of the vector /it returns how many elements does it have:
    cout<<"size : "<<v.size()<<endl;


    //accessing element at particular index;
    cout<<"element at given index : "<<v.at(2)<<endl;

    //accessing last and first element;
    cout<<"first element : "<<v.front()<<endl; 
    cout<<"last element : "<<v.back()<<endl;

    //insert function 
    /*

    syntax ---> vector_name.insert(vector_name.begin()+index, value);
    
    */
    v.insert(v.begin()+2,888);

    //printing array
    cout<<"before pop and after using insert : ";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //using pop_back command  to remove element by default it removes last element if not  specified;
    v.pop_back();

    //printing after pop_back;
    cout<<"after pop : ";
     for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //clearing the whole vector ;
    v.clear();

    //another way of initialization 
    vector<int> a(5,1); // a(size, intialization value);
    // printing this new vector 
    cout<<"new vector :  ";
    for(int i : a){
        cout<<i<<" ";
    }cout<<endl;
    
    // copying one vector into another 
    vector<int> last(a);
    // printing
    cout<<"copied vector : ";
    for(int i: last){
        cout<<i<<" ";
    }cout<<endl;
    return 0;
}
