#include<iostream>
#include<map>
using namespace std;

int main(){
/*
map consist of two things one key and second value 
syntax -----> map<key_data_type, value_data_type> map_name;
important things about map;
two different values doesn't have smae key;
two different keys can have same value; 
*/
    //creating map
    map<int,string> m;

    //adding elements
    m[1]="first";
    m[24]="second";
    m[6]="third";
    m[4]="five";

/*

by default map present in ordered manner with respect to its value;

*/
    //printing map with their keys and values;
    cout<<"MAP : ";
    for(auto i : m){
        cout<<"\t"<<i.first<<"  :  "<<i.second<<endl;
    }cout<<endl;

    //inserting new value in map
    m.insert({2,"fourth"});

    cout<<"\n\nAFTER INSERTING NEW VALUE -> "<<endl;
    cout<<"MAP : ";
    for(auto i : m){
        cout<<"\t"<<i.first<<"  :  "<<i.second<<endl;
    }cout<<endl;

    //using count method to check given key is present or not;
    cout<<"TO CHCEK GIVEN KEY IS PRESENT  ? : "<<m.count(24)<<endl;

    // erasing a given key
    m.erase(6);
    
    //after erasing the key
    cout<<"\n\nAFTER ERASING A KEY : "<<endl; 
    cout<<"MAP : ";
    for(auto i : m){
        cout<<"\t"<<i.first<<"  :  "<<i.second<<endl;
    }cout<<endl;

    //using find method
    auto it=m.find(24);
    cout<<"\n\n AFTER USING FIND METHOD : "<<endl;
    cout<<"MAP : ";
    for ( auto i = it; it != m.end(); i++)
    {
        cout<<"\t"<<(*i).first<<"  :  "<<(*i).second<<endl;;
    }cout<<endl;
    



    
    return 0;
}