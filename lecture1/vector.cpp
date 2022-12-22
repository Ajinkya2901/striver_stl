#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);
    cout<<"this is size ";
    cout<<arr.size();
    arr.pop_back();
    // arr.clear();
    cout<<"this is size after clear";
    cout<<arr.size()<<endl;;

    vector<int> vec(5,10);  // {10,10,10,10,10}
    vector<int> vec1(vec.begin() , vec.end());
    vector<int> vec2(vec);

    for(auto it : vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it : vec1)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it : vec2)
    {
        cout<<it<<" ";
    }
    cout<<endl;

    //2d vector
    cout<< "this is vdec";
    vector<vector<int>> vec3(6 , vector<int>(2 , 0));
    // dvec.push_back(vec);
    // dvec.push_back(vec1);
    // dvec.push_back(vec2);
    

    // for(auto itvct : vec3)
    // {
    //     for(auto it : itvct)
    //     {
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }

    // defining 10 * 20 with 0 in it 
    vector<vector<int>> vec4(10 , vector<int>(20 , 9));
    // for(auto itvect : vec4)
    // {
    //     for(auto it : itvect)
    //     {
    //         cout << it << " ";
    //     }
    //     cout << endl;
    // }

    // for(int i = 0; i < vec4.size() ; i++)
    // {
    //     for(int j = 0 ; j < vec4[i].size() ; j++)
    //     {
    //         cout<<vec4[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    vector<vector<vector<int>>> vec5(4 , vector<vector<int>>(2 , vector<int> ( 3 , 9)));

    for(auto itvect  : vec5)
    {
        for(auto it2d : itvect )
        {
            for(auto it1d : it2d)
            {
                cout << it1d << " " ;
            }
            cout << endl;
        }
        cout << endl;
    }


}