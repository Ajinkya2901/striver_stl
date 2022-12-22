#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int > st;
    st.emplace(23);
    st.push(23);
    st.push(45);
    st.push(45);
    st.push(45);
    st.push(45);
    cout << st.top();
    st.pop();
    cout << st.top();

    queue<int> q;
    q.push(12);
    q.push(20);
    q.push(10);
    q.push(56);
    q.push(345);

    q.pop();
    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }


    deque<int> dq;
    dq.push_front(12);
    dq.push_front(54);
    dq.push_front(22);
    dq.push_front(56);
    dq.push_back(4567);
    dq.push_back(45);
    dq.push_back(67);

    dq.pop_back();
    dq.pop_front();



    cout<< "this is front" <<  dq.front( )<< endl ;
    cout<< dq.back()<< endl ;

    deque<pair<int,int>> dq1;
    pair<int,int> p;
    p.first = 1;
    p.second  = 1;
    dq1.push_back(p);
    pair<int , int > pair0 = dq1.front() ;
    cout << pair0.first;
    cout << pair0.second;

    priority_queue<int> dp;
    dp.push(-4);
    dp.push(-90);
    dp.push(-1);
    dp.push(-89);
    dp.push(-45);

    cout <<"from here count: "<<  -1 * dp.top() << endl;
    dp.pop();
    cout << -1 * dp.top()<< endl;;
    dp.pop();
    cout << -1 * dp.top()<< endl;;
    dp.pop();


    priority_queue<pair<int,int>> pq;
    pq.push({45 ,45});
    pq.push({3 ,3});
    pq.push({3 ,45});
    pq.push({3 ,34});
    pq.push({12,3});

    cout << " this is qp pair pop";
    pair<int ,int> pair1 = pq.top();
    cout << pair1.first;

    pq.pop();


    cout << endl << "this is " << endl;
    priority_queue<int , vector<int> , greater<int>> pq2;
    pq2.push(34);
    pq2.push(2);
    pq2.push(6);
    pq2.push(5);
    pq2.push(4);
    pq2.push(2);

    for(int i = 0 ; i < 5 ; i ++)
    {
        cout << pq2.top() << endl ;
        pq2.pop();
    } 
    
    
    
}


