#include<iostream>
#include<array>
using namespace std;

int main(){
    //normal basic array;
    int basic[3]={1,2,3};

    //creating array through vector array;

    //array<data_type, size> name = {initialization};
    array<int,4> a={10,20,30,40};

    //size function name.size() --> gives the size of the araray ;
    int size=a.size();

    // traversing array;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //finding element at particular index using function in vector;
    cout<<"ELEMET AT GIVEN INDEX : "<<a.at(2)<<endl;

    //finding array is empty or not;
    cout<<"EMPTY OR NOT : "<<a.empty()<<endl;

    // finding first element in array;
    cout<<"FIRST ELEMENT : "<<a.front()<<endl;

    // finidng element at last of the array:
    cout<<"LAST ELEMNET : "<<a.back()<<endl;



    

    
    return 0;
}