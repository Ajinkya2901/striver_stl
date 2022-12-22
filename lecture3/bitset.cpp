#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    bitset<5> btst;

    //flip flip the value at given index
    cout << endl << btst.flip(3) << endl;
    // btst.flip() -> this will flip all

    //all if all value are 1 then  true else false
    cout << btst.all();
    //any if any one bit is 1 return true else false opposite of all
    cout << btst.any();
    //count it givr the no of bit that are set
    cout<< btst.count();
    cout << endl << btst.flip(3) << endl;
    //none if all values are 0 then true 
    cout << btst.none();

    //set set all value to one
    cout << endl << btst.set() << endl;

    // set the given index
    btst.set(3);
    // set the given index to 0 or 1 as per given argument
    cout << endl << btst.set(1,0)<< endl;

    //reset set all value to zero
    cout << "this is reset " <<  btst.reset() << endl;

    btst.set();
    // reset value to 0 for the given index
    cout << btst.reset(4);

    //size  give the size of the bitset which is 5 in this case
    cout << btst.size();


    // test give the true if the given index set to 1
    cout << " this is a test " << btst.test(4) << endl;

}