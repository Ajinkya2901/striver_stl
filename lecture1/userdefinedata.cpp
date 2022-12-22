// #include<iostream>
#include<bits/stdc++.h>
// #include<array>
using namespace std;

struct ajinkya
{
    int rollno;
    string name;
    int dob;
    ajinkya(string name_ ,int rollno_ ,  int dob_)
    {
        rollno = rollno_;
        name = name_;
        dob = dob_;
    }
};

array<int , 5>arr ;
int main()
{
    ajinkya  *variable1 = new ajinkya("pratik" , 21252 , 29052003);
    cout<< variable1->name<<endl;
    cout<< variable1->rollno << endl;
    cout<< variable1->dob << endl;
    array<int , 5>arr = {1,2}; 
    vector<int>v1 = {1111,1,1,8887675,1,1881,1,334,1,3,1};
    // int arr[5];
    arr.fill(3);
    for(int i = 0 ; i < 5 ; i++)
    {
        // cout<<arr[i]<<" ";
        cout<< arr.at(i);
    }

    // iterators
    // begin(),end() ,rbegin() , rend();

    for(auto it = arr.begin() ; it != arr.end() ; it++)
    {
        cout<< *(it) << " " ;
    }
    cout<<endl;
    for(auto it = v1.rbegin() ; it != v1.rend() ; it++)
    {
        cout<< *(it) << " " ;
    }
    cout<<endl;

    for(auto it : arr )
    {
        cout<< it << " " ;
    }
    cout<<endl;

    string s  = "this is ajinkya dattatray mogal";
    for(auto c : s)
    {
        cout<< c << " ";
    }
}