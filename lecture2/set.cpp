#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> st;
    st.insert(4);
    st.insert(98);
    st.insert(5);
    st.insert(7);
    st.insert(10);
    st.insert(10);
    st.insert(10);
    st.insert(10);
    st.insert(10);

    st.emplace(23);  // work similar to insert but have less time comp

    // st.erase(st.begin()); // index is given
    // st.erase(st.begin() , st.end() );  // range 
    // st.erase(10);  // delete key

    cout <<" this" << endl;
    for(auto it : st)
    {
        cout<< it << " "; 
    }
    cout << "end" << endl;

    auto it = st.find(10);     // if element is not present then it eill point to end()
    auto it1 = st.find(98);
    cout<< *it1;

    //time comp of set function is all O(logn) ->> order set


    //unorderd set;
    //time complexity of unodered set is O(1) in worst cse it is O(set_size); 
    //tle - > switch to unorderd set to set

    unordered_set<int> us ;
    us.insert(45);
    us.insert(76);
    us.insert(35);
    us.insert(45);
    us.insert(43);
    us.insert(23);
    us.insert(23);
    us.insert(23);
    us.insert(89);          //elemeent are inserted ar random order 

    for(auto it : us)
    {
        cout << it << " " ;
    }
    cout<< endl;



    multiset <int> ms;             //store all the element not just unique in sorted order
    ms.insert(12);
    ms.insert(12);
    ms.insert(12);
    ms.insert(2);
    ms.insert(2);
    ms.insert(12);

    cout<<" this is count" <<ms.count(12);

    // ms.erase(12);
    ms.find(2);
    ms.erase(ms.find(12),ms.find(12) );
    for(auto it : ms )
    {
        cout << it << " ";
    }

}