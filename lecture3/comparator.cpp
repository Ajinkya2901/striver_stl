#include<bits/stdc++.h>
using namespace std;
bool comp(int a , int b)
{
    if(a >= b) return 1;
    else return 0;
}
bool comp1(pair<int , int> p1 , pair<int , int > p2)
{
    if(p1.first < p2.first) return 1;
    if(p1.first == p2.first) {
        if(p1.second > p2.second) return 1;
    }
    return 0;
}
int main()
{
    int array[10] = {8 , 3, 2, 7 , 2, 8, 4,90 , 34, 67};
    sort(array ,array + 10 , comp);
    for(auto it : array)
    {
        cout << (it) <<" ";
    }cout <<endl;

    // arr
    pair<int , int> arr[3] = {{1,4} , {5,2} , {5,9}};
    // sort this in such a way that the element in a pair smaller appears
    // first,and if first is eual then sort sccording to second and keep the larger second
    sort(arr , arr + 3 , comp1);
    for(auto it : arr)
    {
        cout << (it).first << " "<< it.second <<" " << endl;
    }


    // desending
    sort(arr ,arr + n , greater<int>);
    // greater int is an inbuilt comparator
    // which only works for descending order



}