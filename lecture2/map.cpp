#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string , int> mp;          //unique element and in ordered     ;            // tc logn
    mp["ajinkya"] = 79;
    mp["karan" ] = 34;
    mp["pratik"] = 89;
    mp["kartik"] = 23;
    mp["ajinkya"] = 23;
    mp["ajinkya"] = 239;
    mp["ajinkya"] = 333;
    mp["ajinkya"] = 79324;
    mp["binod" ] = 99;
    mp.emplace("ajidn" , 990);


    auto it = mp.find("ajinkya");
    auto it1 = mp.find("non");
    cout<<endl << "this is it" ;
    cout<< (*it).second << endl<<(*it1).second;
    pair<int,int> p;
    p.first = 1;
    p.second  = 1;
    // this is how data is stored in map and accesed

    cout<<mp.size();
    for(auto it = mp.begin() ; it != mp.end() ; it++)
    {
        cout<< (*it).first << (*it).second << endl;
    }

    for(auto it : mp)
    {
        cout<< it.first << it.second << endl;
    }



    pair<int, int>pr;               //this is pair {1, 1}
    pair< pair<int,int> , int> pr1;  //    this is {{1,2} , 3}
    pair < pair<int, int> , pair<int ,int > > pr2 ;  // this {{1,1} , {1,2}} ;
    // also

    set<pair<int,int> >s;
    map< pair<int, int> , pair<int, int> > mp_;          // this pair in map



    //unordered map
    // tc O(1);
    // worst case O(n);  //unorederd
    // unordered_map<int, pair<int , int > > mp ;  this can not be done in unorderd map;

    unordered_map<string , int> mp1;
    mp1["ajinkaldfjlk"] = 45;
    mp1["swayam"] = 23;
    mp1["karan"] = 90;
    mp1["akash"] = 90;
    mp1["mogal"] = 88585;
    mp1["ajinkaldfjlk"] = 10;

    mp1.emplace("karit" , 78);

    for(auto it : mp1)
    {
        cout<< "this is key  " << it.first <<"this is a value  " << it.second << endl;
    }

}