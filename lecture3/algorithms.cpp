#include<bits/stdc++.h>
using namespace std;

int main()
{
    // algorithms
    // sort

    int arr[7] =  {9,8,7,6,5,4,3};
    sort(arr + 2, arr + 7 );       // sort(begining iterator , end iterator) it will sort that
    for(int i = 0 ; i < 7 ; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;

    // vector<int> vec(7) ;
    // for(int i = 0 ; i < 7 ; i++)
    // {
    //     cin >> vec[i]  ;
    // }

    // sort(vec.begin() + 2 , vec.end() );
    // for(int i = 0 ; i < 7 ; i++)
    // {
    //     cout << vec[i] << " " ;
    // }

    reverse(arr , arr + 7);            //reverse in the range of the given iterator   reverse(begin iterator , end iterator);
    for(int i = 0 ; i < 7 ; i++)
    {
        cout << arr[i] << " " ;
    }

    // to get the maximum and minimum element in arry or vector
    max_element(arr , arr + 7);         // return the iterator of the max element we need to derefrence the iterator to get the element
    cout <<endl << "this is a max element " <<  *max_element(arr , arr + 7);            //*max_element(begining iterator , ending ierator)
    
    min_element(arr , arr + 7);         // return the iterator of the min element we need to derefrence the iterator to get the element
    cout << endl << "this is a min element " <<  *min_element(arr , arr + 7);


    //sum of all the element in the given range of array
    cout  << accumulate(arr , arr + 7 , 0 );   // accumulate(begining iterator , end iterator , initialsum);
    // for vector accumulate(vec.begin() , vec.end() , 0)


    // finding the given element
    // return the iterator pointing to the first instance of the given element if not found then point to the last element
    auto it = find(arr , arr + 7 , 60);
    cout << endl <<  " this is the pointer to the element to find : " << it << " this after derefrencing" << *(it)<< endl;
    //to get the index subtract the begin iterator  from the founded iterator
    cout << "this is a index : " << (it - arr ) << endl;               //not found so give the index that is after the end ->7

    if(it == arr + 7)           //for vect (it == vec.end())
    {
        cout << "element not found"<< endl;
    }
    else{
        cout << "element is present at index : " << (it - arr)<< endl;
    }


    //nuber of time the given element occured
    int cnt = count(arr , arr + 7 , 4);    //count(begin iterator , end iterator , element to count);
    cout << cnt ;


    // binary search O(log(n))
    // return true if element is present
    // works for SORTED array

    // find(ar, ar, a)  work on unsorted also not binary search and 
    //find has complexity of O(n) binary has O(log(n))

    sort(arr , arr + 7);
    bool ispresent = binary_search(arr , arr + 7 , 70);
    cout << endl <<ispresent << endl;


    //lowerbound
    //lets suppose x is pass as argument , gives the element which is not less than x or we can say index of the element just greater than x
    //tc is log(n) as binary search is used

    // arr[] = {1 ,4 ,5 ,7 ,10 ,10 , 19 ,51}
    //x = 10             give the iterator pointing to 10 that is index 4
    //x = 6            give the iterator pointing to 7 that is index 3
    //x = 100           give the iterator pointing to  end()
    int arr1[8] = {1 , 4 , 5 , 7 , 10 , 10 , 19 , 51 };
    cout << "this is lowerbound : ";
    auto it1 = lower_bound(arr1 ,arr1 + 7 , 3);
    cout << *it1 << endl;
    int index = it1 -arr1;
    cout << index;



    // upperbound
    //lets suppose x is pass as argument , gives the element which just greater than x
    //tc is log(n) as binary search is used

    // arr[] = {1  ,5 ,7 , 7 , 8 , 10 ,10 , 10 , 11 ,11,12}
    //x = 7             give the iterator pointing to 8 that is index 4
    //x = 6            give the iterator pointing to 7 that is index 2
    //x = 12           give the iterator pointing to  end()
    cout << endl;
    int arr2[11] = {1  ,5 ,7 , 7 , 8 , 10 ,10 , 10 , 11 ,11,12};
    cout << upper_bound(arr2 , arr2 +11 , 7) - arr2 << endl;
    cout << upper_bound(arr2 , arr2 +11 , 6) - arr2<< endl;
    cout << upper_bound(arr2 , arr2 +11 , 12) - arr2<< endl;

    // q1. find x in a given sorted arr
    // arr[] = {1  ,5 ,7 , 7 , 8 , 10 ,10 , 10 , 11 ,11,12}
    int arr3[11] = {1  ,5 ,7 , 7 , 8 , 10 ,10 , 10 , 11 ,11,12};

    if(binary_search(arr3 , arr3 + 11 , 6) == true)
    {
        cout <<  lower_bound(arr3 , arr3 +11 , 6) - arr3 << endl;
    }
    else cout << "not exist";

    // 2nd way
    int ind = lower_bound(arr3 , arr3 +11 , 6) - arr;
    if(ind != 11 && arr3[ ind ] == 6) cout << "found at : " << ind << endl;
    else cout << " doe not found";

    // find the last occurence of x in an arr
        // arr[] = {1  ,5 ,7 , 7 , 8 , 10 ,10 , 10 , 11 ,11,12}
    // x = 10 index is 7
    // x = 6  doesnot exist
    int inde = upper_bound(arr3 , arr3 + 11 , 10) - arr3;
    inde = inde -1;
    if(inde >=0 && arr3[inde] == 10)
    {
        cout << "the last occurence" << inde;
    }
    else cout << "not ";
    

    // q3.tell the number of time the x appear
        // arr[] = {1  ,5 ,7 , 7 , 8 , 10 ,10 , 10 , 11 ,11,12}
    // x = 10      ans = 3           lowerbound will give index 5 and upperbound 8
    // x == 6  ans = 0             lowerbound = 2 upper_bound = 2
    cout<< endl;
    cout << (upper_bound(arr3 ,arr3 +11 , 10 ) - arr3) - (lower_bound(arr3 , arr3 + 11 , 10) - arr3)  << endl;
    cout <<(upper_bound(arr3 ,arr3 +11 , 6 ) - arr3)  - (lower_bound(arr3 , arr3 + 11 , 6) - arr3 )  << endl;


    // next permutation
    //tc is O(n);
    string s = "abc";

    //abc
    //acb
    //bac
    //bca
    //cab
    // cba

    //s = "bca";
    bool res = next_permutation(s.begin() , s.end());             // s change to cab and return true
    cout << s;
    do{
        cout << s <<endl;
    }while(next_permutation(s.begin() , s.end()));


    bool res1 = prev_permutation(s.begin() , s.end());
    

    











}